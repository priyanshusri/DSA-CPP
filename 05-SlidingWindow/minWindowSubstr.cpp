//Time: O(n+m), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() || s.length()<t.length()){
            return "";
        }
        vector<int> need(128,0);
        for(char c: t){
            need[c]++;
        }
        int missing = t.length();
        int start = 0;
        int minlen = INT_MAX;
        int left=0;
        for(int right=0;right<s.length();right++){
            char c= s[right];
            if(need[c]>0){
                missing--;
            }
            need[c]--;
            while(missing==0){
                int len = right-left+1;
                if(len<minlen){
                    minlen = len;
                    start = left;
                }
                char leftchar = s[left];
                need[leftchar]++;
                if(need[leftchar]>0){
                    missing++;
                }
                left++;
            }
        }
        return minlen == INT_MAX?"":s.substr(start,minlen);
    }
};
int main() {
    Solution sol;

    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << sol.minWindow(s, t) << endl;

    return 0;
}