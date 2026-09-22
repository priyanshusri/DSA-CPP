//Time: O(n+m), we are given two different strings
//Space: O(1), there are only 26 letters in the alphabet so the array won't increase with input
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};
        int count1[26]={0};
        for(int i=0;i<ransomNote.length();i++){
            count[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            count1[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count1[i]<count[i]){
                return false;
            }
            
        }
        return true;
    }
};