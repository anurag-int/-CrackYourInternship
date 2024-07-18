// use stack to track of characters
// note: handle overflow condition....

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;


        if(s.length() == 1) return false;

        for(int i=0; i<s.length(); i++)
        {
            if(st.empty() && (s[i] == '}' || s[i] == ')' || s[i] == ']')) return false;

            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            
            
            else if(( s[i] == ')' && st.top() == '(') || ( s[i] == '}' && st.top() == '{') || ( s[i] == ']' && st.top() == '[' ))
                st.pop();
            
            else 
                return false;

        }

        if(st.empty()) 
            return true;

        return false;
    }
};