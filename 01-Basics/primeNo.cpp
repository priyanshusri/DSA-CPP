//Check if a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int a;
    int count =0;
    cin >> a;
    if(a<=1){
        cout << "Not prime number";
    }
    for(int i =2; i*i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count>2){
        cout << "Not prime number";
    }
    else{
        cout << "Prime number";
    }
    return 0;
}