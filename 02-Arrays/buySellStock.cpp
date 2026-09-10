//Time: O(n), we go through the array only once
//Space: O(1), we only use two variables minPrice and maxProfit
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            int profit = prices[i]-minPrice;
            maxProfit = max(maxProfit,profit);
            minPrice = min(prices[i],minPrice);
        }
        return maxProfit;
    }
};