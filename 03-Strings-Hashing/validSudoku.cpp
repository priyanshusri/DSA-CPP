//Time: O(1), Space: O(1)
//While revising solve it, using hashset
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]={};
        bool cols[9][9]={};
        bool boxes[9][9]={};
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                int digit = board[r][c]-'1';
                int box = (r/3)*3+(c/3);
                if(rows[r][digit]){
                    return false;
                }
                if(cols[c][digit]){
                    return false;
                }
                if(boxes[box][digit]){
                    return false;
                }
                rows[r][digit]=true;
                cols[c][digit]=true;
                boxes[box][digit]=true;
            }
        }
        return true;
    }
};