//Time: O(n), Space: O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest = 0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int num: st){
            if(st.find(num-1)==st.end()){
                int current = num;
                int length = 1;
                while(st.find(current+1)!=st.end()){
                    length++;
                    current++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};