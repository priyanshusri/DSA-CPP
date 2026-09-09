//Time: O(log n + k) where k is the number of matching elements
//Space: O(n), multiset will store the n elements of the nums
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       unordered_multiset<int> maj;
       for(int i=0;i<n;i++){
        if(maj.count(nums[i])>=n/2){
            return nums[i];
        }
        maj.insert(nums[i]);
       }
       return {}; 
    }
};