// maintain map those who already visited
// remove ---> total - (some x element) = k(to get k)  ---> to find the element do total - k = x(to find the element)
// and as soon as you got k increase the count

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int count = 0;        
        int prefixSum = 0;
        mp[0] = 1;

        for(int i=0; i<nums.size(); i++)
        {
            prefixSum += nums[i];

            int remove = prefixSum - k;

            count += mp[remove];

           mp[prefixSum]++;
            
        }

        return count;
    }
};