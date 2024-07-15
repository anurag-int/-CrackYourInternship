//intution ---> sort to get the minimum difference b/w chocolate   

//----> O(nlogn)

#include<bits/stdc++.h>

using namespace std;


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
        if(a.size() == 1) return a[0];
        
        sort(a.begin(), a.end());
        
        long long mini = LLONG_MAX;
        
        for(int i=0; i<a.size()-m+1; i++)
        {
            long long minInM = a[i];
            long long maxInM = a[i + m - 1];
            mini = min(mini, maxInM - minInM);
        }
        
        return mini;
    
    }   
};
