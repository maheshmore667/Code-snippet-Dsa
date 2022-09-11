int pivotElement(vector<int>& arr, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(vector<int>& arr, int s, int e, int k) {
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == k) {
            ans = mid;
        }
        if(k >= arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = pivotElement(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, k);
    } else {
        return binarySearch(arr, 0, pivot-1, k);
    }
   
}

