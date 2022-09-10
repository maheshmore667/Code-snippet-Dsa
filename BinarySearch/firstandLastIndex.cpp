int firstOccurence(vector<int>& arr, int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end -start)/2;
    int ans = -1;
    while(mid <= end) {
        if(arr[mid] == k ) {
            ans =  mid;
          
        }
        //check if first occurence of the array is in the left part of the array
        if(k <= arr[mid]){
            end  = mid - 1;
        }
        //if not then check in the right part
        else {
            start = mid +1;
        }
        mid = start + (end -start)/2;
    }
    return ans;
}
int lastOccurence(vector<int>& arr, int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end -start)/2;
    int ans = -1;
    while(mid <= end) {
       if(arr[mid]>= 0 && arr[mid] == k ) {
           ans = mid;
        }
        //check if last occurence of key prsent in the right part of the mid
        if(k>=arr[mid]){
            start = mid +1;
        }
         //if not then check in the left part
        else {
            end  = mid - 1;
        }
         mid = start + (end -start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> s;
    s.first = firstOccurence(arr,n, k);
    s.second = lastOccurence(arr,n, k);
    
    return s;
}

