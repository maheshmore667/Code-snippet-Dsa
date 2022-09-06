#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverseArray(nums, 0, nums.size()-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, nums.size()-1);
    }
    
    void reverseArray(vector<int>& nums, int start, int end) {
        while( start < end) {
            swap(nums.at(start), nums.at(end));
            start++;
            end--;
        }
    }
    int main() {
        //take input and call functions from here
    }
};