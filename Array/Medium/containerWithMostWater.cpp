// it uses basically two-pointer + greedy(of finding maxHeight) and eventually making maximum of area. 

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;

        int left = 0;
        int right = height.size()-1;

        while(left < right)
        {
            int width = right - left;
            int minHeight = min(height[left], height[right]);
            int area = width * minHeight;

            res = max(res, area);

            if(minHeight == height[left]) left++;
            else right--;

        }

        return res;
    }
};