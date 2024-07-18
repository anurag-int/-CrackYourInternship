// generate all permutations, and store all of them on the set, -
// - and finally copy all elements on the final ans array

#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    
    
    set<vector<int>> st;
    
    void helper(vector<int> arr, int n, int index)
    {
        //base case 
        if(index == n)
        {
            st.insert(arr);
            return;
        }
        
        for(int j=index; j<n; j++)
        {
            swap(arr[index], arr[j]);
            helper(arr, n, index+1);
            swap(arr[index], arr[j]);
        }
        
        
        
    }
    
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        
        helper(arr, n, 0);
        
        vector<vector<int>> ans(st.begin(), st.end());
        
        return ans;
    }
};