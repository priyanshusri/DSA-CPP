//armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cin >> num;
    int org = num;
    int digit = 0;
    int arm = 0;
    int temp = num;
    int count =0;
    while(temp!=0){
        count++;
        temp = temp/10;
    }
    while(num!=0){
    digit = num%10;
    arm = arm + pow(digit,count);
    num = num/10;
    }
    if(arm==org){
        cout << "Armstrong number";
    }
    else{
        cout << " Not a armstrong  number";
    }
}