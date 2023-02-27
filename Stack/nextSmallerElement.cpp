#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i= n-1; i>=0; i--) {
        int num = arr[i];
        while(s.top() >= num) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(num);
    } 
    return ans;
}