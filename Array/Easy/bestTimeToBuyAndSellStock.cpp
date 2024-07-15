// approach - 1 ---> O(N^2)
// approach - 2 ---> preprocessing technique - compute the maximum on future and buy stock at ith day and subract the array[i] - prices[i] and store in the globalmaximum value. --> T.C O(N) , S.C O(N)
// approach - 3 ---> by calculating minimun so far, and each day buy the stock and check the prices[i] - miniSoFar  and update the maxiProfit ---> O(N)



// approach 3
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_so_far = INT_MAX;
        int maxProfit = 0;
        
        for(int i=0; i<prices.size(); i++)
        {
            min_so_far = min(min_so_far, prices[i]);
            
            maxProfit = max(maxProfit, prices[i] - min_so_far);
        }
        
        return maxProfit;
    }
};


