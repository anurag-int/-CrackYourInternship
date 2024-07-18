#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string a, string b) {
        
        int i = 0;
        
        while(i < a.length())
        {
            if(a[i] == b[0])
            {
                int temp_i = i;
                int j = 0;
                while(j < b.length() && temp_i < a.length())
                {
                    if(a[temp_i] == b[j])
                    {
                        temp_i++;
                        j++;
                    }
                    else break;
                }
                if(j >= b.length()) return i;
                
            }

            i++;
        }

        return -1;

    }
};