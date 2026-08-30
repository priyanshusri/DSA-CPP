//calculating power of a number
#include <bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int result = 1;
    for(int i = 0;i<exp;i++){
        result = result *base;
    }
    return result;
}
int main(){
    cout << power(5,3);
}