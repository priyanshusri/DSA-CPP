//Time: O(nlogM), Space: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int findMax(vector<int>& piles){
    int maxi = 0;
    int n = piles.size();
    for(int i =0;i<n;i++){
        maxi = max(maxi,piles[i]);
    }
return maxi;
}
long long totalHours(vector<int>& piles, int k){
    long long totalH = 0;
    int n = piles.size();
    for(int i=0;i<n;i++){
        totalH += (piles[i] + (long long)k - 1) / k;
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = findMax(piles);
        while(low<=high){
            int mid = low + (high-low)/2;
            long long totalH = totalHours(piles, mid);
            if(totalH<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};