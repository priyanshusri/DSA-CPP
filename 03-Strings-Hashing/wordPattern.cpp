//Time: O(n), Space: O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.length()!=words.size()){
            return false;
        }
        unordered_map<char,string> patternToword;
        unordered_map<string,char> wordTopattern;
        for(int i =0;i<words.size();i++){
            char p = pattern[i];
            string w = words[i];
            if(patternToword.count(p) && patternToword[p]!=w ){
                return false;
            }
            if(wordTopattern.count(w) && wordTopattern[w]!=p){
                return false;
            }
            patternToword[p]=w;
            wordTopattern[w]=p;
        }
        return true;
    }
};