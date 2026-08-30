//finding the nth armstrong number
#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n){
    int arm = 0;
    int digit = 0;
    int temp = n;
    int count = 0;
    int org = n;
    if(n<0){
        return false;
    }
    while(temp!=0){
        count++;
        temp/=10;
    }
    while(n!=0){
        digit = n%10;
        arm = arm + pow(digit,count);
        n = n/10;
    }
    return arm == org;
}
int main(){

int nth;
cin >> nth;
int counter = 0;
for(int i = 0;;i++){
    if(isArmstrong(i)){
        counter++;      
    }
    if(counter==nth){
        cout << "Nth armstrong number is : " << i;
        break;
    }
}

return 0;
}