//greedy

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int i=0;
        int n = nums.size();

        int jumpLeft = 0;

        while(i < n)
        {
            if(nums[i] > jumpLeft)  
                jumpLeft = nums[i];

            if(nums[i] == 0 && i != (n-1) && jumpLeft <= 0) return false;

            i++;
            jumpLeft--;
            
        }

        return true;
    }
};