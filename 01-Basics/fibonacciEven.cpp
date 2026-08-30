//sum of fibonacci at even indexes
#include <bits/stdc++.h>
using namespace std;
int evenIndex(int n){
  int  prev1=1;
   int prev2=0;
    int sum = 0;

    sum = prev2;

    if(n<0){
        return 0;
    }
    for(int i =2;i<=2*n;i++){
        int curr = prev1+prev2;

        if(i%2==0){
            sum+=curr;
        }
        prev2 = prev1;
        prev1 = curr;
    }
    return sum;
}
    int main(){
        int n;
        cin >> n;
        cout << evenIndex(n);
    }

