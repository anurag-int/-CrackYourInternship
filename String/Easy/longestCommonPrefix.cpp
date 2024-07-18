// select 1 string and match each character one by one on each string on the array. 
// find out longest prefix matched, else return your longest prefix.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string cmnPrefix = "";

        for(int i=0; i<strs[0].length(); i++)
        {
            char ch = strs[0][i];
            bool flag = false;
            
            for(int j=1; j<strs.size(); j++){

                // if the size doesn't match with first string or if some character get mismatch then exit.
                if(strs[j].length() < i || strs[j][i] != ch) 
                    return cmnPrefix;
            }

            if(flag == false){
                cmnPrefix = cmnPrefix + ch;
            }
        }

        cout << cmnPrefix << endl;
        return cmnPrefix;
    }
};