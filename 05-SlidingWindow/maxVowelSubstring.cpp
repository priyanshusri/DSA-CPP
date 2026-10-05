//Time: O(n), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }
        int maxcount = count;
       for(int i=k;i<s.length();i++){
         if(s[i]=='a' || s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
         if(s[i-k]=='a' || s[i-k]=='e' ||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                count--;
            }
            maxcount = max(count,maxcount);
          }
          return maxcount;
        }
};