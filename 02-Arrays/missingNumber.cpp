//the range for this problem is [0,n]
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int expectedSum = (n*(n+1))/2;
        return expectedSum - sum;
    }
};