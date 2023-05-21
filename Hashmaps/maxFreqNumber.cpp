int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int>m;

    int maximumFrequency = 0;
    int maxAns = 0;

    for(int i=0; i<n; i++) {
        m[arr[i]]++;
        maximumFrequency = max(maximumFrequency, m[arr[i]]);
    }

    for(int i=0; i<n; i++) {
        if(maximumFrequency == m[arr[i]]){
            maxAns = arr[i];
            break;
        }
        
    }

    return maxAns;
}