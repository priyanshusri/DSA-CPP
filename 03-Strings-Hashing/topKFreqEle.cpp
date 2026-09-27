//Time: O(n + m log m), where m = number of unique elements, Space: O(m)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
             // Count frequency of each number
        unordered_map<int, int> freq;
        for(int num : nums) {
            freq[num]++;
        }
        // Store number and its frequency
        vector<pair<int, int>> freqVector;
        for(auto &p : freq) {
            freqVector.push_back({p.first, p.second});
        }
        // Sort by frequency in descending order
        sort(freqVector.begin(), freqVector.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;
             });
        // Take the first k numbers
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(freqVector[i].first);
        }
        return ans;
    }
};