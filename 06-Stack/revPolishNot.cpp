//Time: O(n), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            string token = tokens[i];
            if(token!="+" && token!="-" && token!="*" && token!="/"){
                st.push(stoi(token));
            }
            else{
                int b =st.top();
                st.pop();
                int a =st.top();
                st.pop();
                if(token=="+"){
                    st.push(a+b);
                }
                else if(token=="-"){
                    st.push(a-b);
                }
                else if(token=="*"){
                    st.push(a*b);
                }
                else{
                    st.push(a/b);
                }
            }
        }
        return st.top();
    }
};