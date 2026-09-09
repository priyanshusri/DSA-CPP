#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;
    }
};
//another way to solve it is using either unordered_map or unordered_set
//Time complexity: O(n), we go through the array once
//Space complexity: O(n), in the worst case we store every element in it(they are all unique)
/*
unordered_set<int> dup;
        for(int i=0;i<nums.size();i++){
            if(dup.find(nums[i])!=dup.end()){
                return true;
            }
            dup.insert(nums[i]);
        }
        return false;
*/
