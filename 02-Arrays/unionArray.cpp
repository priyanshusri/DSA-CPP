//Compare nums1[i] and nums2[j]. Take the smaller one and move that pointer. If it's already in the answer,
// don't add it again.
/*
The first while does the actual merging/comparing of the two arrays.
The last two while loops only handle whatever is left after one array has finished.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size();
       int n2 = nums2.size();
       int i=0; 
       int j=0;
       vector<int> unionArr;
       while(i<n1 && j<n2){
        if(nums1[i] <= nums2[j]){
            if(unionArr.size()==0 || unionArr.back() != nums1[i]){
                unionArr.push_back(nums1[i]);
            }
            i++;
        }
        else{ 
                if(unionArr.size()==0 || unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }

        
       }
       while(i<n1){
          if(unionArr.size()==0 || unionArr.back() != nums1[i]){
                unionArr.push_back(nums1[i]);
            }
            i++;
       }
       while(j<n2){
         if(unionArr.size()==0 || unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
       } 
       return unionArr;
    }
};