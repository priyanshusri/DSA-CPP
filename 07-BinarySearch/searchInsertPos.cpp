//Time: O(logn), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
        }
        return low;

    }
};