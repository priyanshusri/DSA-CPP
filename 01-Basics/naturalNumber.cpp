//finding all the factors of a natural number
#include<bits/stdc++.h>
using namespace std;
void naturalFactors(int n){
    for(int i = 1; i*i<=n;i++){
        if(n%i==0){
            cout << i << " ";
            if(i !=n/i){
                cout << n/i << " ";
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    naturalFactors(n);
    return 0;
}