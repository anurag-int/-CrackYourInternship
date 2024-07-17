
//prefix Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        vector<int> prefixSum1(k+1, 0);
        vector<int> prefixSum2(k+1, 0);
        int ans = 0;
        int n = cardPoints.size();
        int prefixSum = 0;

        for(int i=0; i<k; i++)
        {
            prefixSum += cardPoints[i];
            prefixSum1[i+1] = prefixSum;
        }

        prefixSum=0;
        int index = k-1;
        for(int i=n-1; i>=n-k; i--)
        {
            prefixSum += cardPoints[i];
            prefixSum2[index--] = prefixSum;
        }

        int i = 0;
        int j = 0;

        while(i<k+1 && j<k+1)
        {
            int sum = prefixSum1[i] + prefixSum2[j];
            ans = max(ans, sum);
            i++;
            j++;
        }

        return ans;
    }
};