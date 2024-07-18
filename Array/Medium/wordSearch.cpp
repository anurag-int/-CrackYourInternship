// standard problem on backtrack

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    bool wordPresentOrNot(vector<vector<char>> &board, string &word, int i, int j, int m, int n, int index)
    {
        //base case 
        if(index >= word.length())  return true;
        if(i<0 || i>=m || j<0 || j>=n || board[i][j] == '$' || board[i][j] != word[index]) return false;
        

        char temp_char = board[i][j];
        board[i][j]  = '$';
      
        for(auto &dir : directions)
        {
            if(wordPresentOrNot(board, word, i+dir[0], j+dir[1], m, n, index+1))
                return true;
        }

        //backtack
        
        board[i][j] = temp_char;


        return false;
        
    }


    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j] == word[0])
                {
                    if(wordPresentOrNot(board, word, i, j, m, n, 0))
                        return true;
                }
            }
        }

        return false;


    }
};