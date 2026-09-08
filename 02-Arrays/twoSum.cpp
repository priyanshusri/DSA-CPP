//we are asking the question, if we have already seen this number?, if not then store it in the unordered map
//Time complexity = O(n). We go through the loop only once
//Space complexity = O(n). Potentially we could be storing all the elements.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(mp.find(complement)!=mp.end()){
                return {mp[complement],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};