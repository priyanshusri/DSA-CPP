//print neon numbers in a given range
#include <iostream>
using namespace std;
bool isNeon(int n){
       
       int neon = n*n;
        int sum = 0;
        while(neon!=0){
            sum = sum + neon%10;
            neon = neon/10;
        }
return sum==n;
    }
int main(){
    int a=1,b=1000;
    for(int i = a;i<=b;i++){
        if(isNeon(i)){
            cout << i << " ";
        }
    }
    return 0;
}