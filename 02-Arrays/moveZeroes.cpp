//two pointer approach, i will iterate through the loop and j will point to 0, for non-zero numbers places
// will be swapped with i and j will be incremented
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};