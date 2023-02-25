class Solution {
private : 
    vector<int> getNextIndex(vector<int> heights, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1; i>=0; i--) {
            int num = heights[i];
            while(s.top() != -1 && heights[s.top()] >= num ) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
      vector<int> getPrevIndex(vector<int> heights, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0; i<n; i++) {
            int num = heights[i];
            while(s.top() != -1 && heights[s.top()] >= num ) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n); 
        next = getNextIndex(heights, n);
        vector<int> prev(n); 
        prev = getPrevIndex(heights, n);

        int area = INT_MIN;
        for(int i=0; i<n ; i++) {
            int l = heights[i];
            if(next[i] == -1) {
                next[i] = n; 
            }
            int b = next[i]-prev[i]-1;
            area = max(area, l*b);
        }

        return area;
    }
};