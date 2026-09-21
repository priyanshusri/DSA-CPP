//there is a better way to solve this problem using cyclic linked list. try that method when you revise this
//problem
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ans=nums[i];
            }
        }
        return ans;
    }
};