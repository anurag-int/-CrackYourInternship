#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        for(int i=0; i<nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;

            if(nums[index] < 0) 
            {
                return abs(nums[i]);
            }
            nums[index] = nums[index] * (-1);
        }

        return -1;
        
    }
};