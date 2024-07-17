// 1 pointer + same as 3 sum.

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n; j++)
            {
                if(j != (i+1) && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = n-1;

                while(k < l)
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum +=nums[l];

                    if(sum == target)
                    {
                        while(k < l && nums[k] == nums[k+1]) k++;
                        while(k < l && nums[l] == nums[l-1]) l--;

                        vector<int> temp_ans = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp_ans);
                     
                        k++;
                        l--;
                         
                    }
                    else if(sum < target) k++;
                    else l--;
                }
            }
        }

        return ans;
    }
};