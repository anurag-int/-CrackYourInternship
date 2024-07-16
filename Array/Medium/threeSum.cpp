
// things to note:
    // sort array --> to use two pointers
    // handle duplicates in all 3 pointers
    // 3 pointer always starts with the last, 
    // 1 pointer always move forward 
    // 2 pointer followed by 1 pointer

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;


        for(int i=0; i<nums.size()-2; i++)
        {

            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }


            int j = i + 1;
            int k = nums.size()-1;

            while(j < k)
            {
                
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    // Skip duplicates for j
                    while (j < k && nums[j] == nums[j + 1]) j++;

                    // Skip duplicates for k
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    vector<int> sum_array = {nums[i], nums[j], nums[k]};
                    ans.push_back(sum_array);

                    j++;
                    k--;
                    
                }

                else if(sum < 0) j++;

                else k--;
            }

           
        }

        return ans;

    }
};