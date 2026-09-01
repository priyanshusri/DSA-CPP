//in the increasing order there should be only 1 break due to rotation
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
       int count = 0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[(i+1)%nums.size()]){//%nums.size() to compare last element with first element
            count++;
        }
       }
       return count<=1; 
    }
};