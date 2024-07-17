#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();

        int top = 0, right = n-1, bottom = m-1, left = 0;

        while(top <= bottom && left <= right)
        {
            //for top
            if(left > right) return ans;
            for(int first=left; first<=right; first++)
            {
                ans.push_back(matrix[top][first]);
            }
            

            //for right
            
            top++;
            if(top > bottom) return ans;
            for(int second=top; second<=bottom; second++)
            {
                ans.push_back(matrix[second][right]);
            }

            //bottom
            right--;
            if(right < left) return ans;
            for(int third=right; third>=left; third--)
            {
                ans.push_back(matrix[bottom][third]);
            }

            //for right
            bottom--;
            if(top > bottom) return ans;
            
            for(int fourth=bottom; fourth>=top; fourth--)
            {
                ans.push_back(matrix[fourth][left]);
            }

            left++;
        }

        return ans;
        
    }
};