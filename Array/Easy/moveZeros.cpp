#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// using two pointers algo.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        int i = 0;
        int j = 1;

        while(j < nums.size())
        {
            if(nums[i] == 0)
            {
                while(j < nums.size() && nums[j] == 0)
                {
                    j++;
                }
                if(j < nums.size())
                    swap(nums[i], nums[j]);
            }
                i++;
                j++;
        }
    }
};