//Time: O(n), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        array<int,26> countS={};
        array<int,26> countP={};
        if(p.length()>s.length()){
            return ans;
        }
        for(int i=0;i<p.length();i++){
            countP[p[i]-'a']++;
        }
        for(int i=0;i<p.length();i++){
            countS[s[i]-'a']++;
        }
         if(countP==countS){
            ans.push_back(0);
        }
        for(int i=p.length();i<s.length();i++){
            countS[s[i-p.length()]-'a']--;
            countS[s[i]-'a']++;
            if(countP==countS){
                ans.push_back(i-p.length()+1);
            }
        }
        return ans;
    }
};