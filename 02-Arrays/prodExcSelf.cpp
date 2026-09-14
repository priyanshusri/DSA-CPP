//Time:O(n), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //vector<int> prefix(nums.size());
       // vector<int> suffix(nums.size());
        vector<int> ans(nums.size(),1);
        //suffix[nums.size()-1]=1;
        //prefix[0]=1;
        for(int i = 1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix = 1;
        for(int i =nums.size()-2;i>=0;i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        // for(int i = 0;i<nums.size();i++){
        //     ans[i]=suffix[i]*prefix[i];
        // }
        return ans;
    }
};