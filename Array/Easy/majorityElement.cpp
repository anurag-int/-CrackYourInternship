// approach - 1 ---> O(N^2)
// approach - 2 ---> O(N), space(map) O(N)
// approach - 3 ---> O(N), O(1) Moore voting algo.


// moore voting algorithm
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        
        int maxCount = 1;
        int maxiVal = nums[0];


        int i = 1;

        while(i < nums.size())
        {
            if(nums[i] != maxiVal)
            {
                maxCount--;
                if(maxCount == 0)
                {
                    maxiVal = nums[i];
                    maxCount++;
                }
            }
            else
            {
                maxCount++;
            }
            i++;
        }
        return maxiVal;
    }

    
};

