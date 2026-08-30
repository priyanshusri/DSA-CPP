//Reverse a number
#include <iostream>
using namespace std;
int main(){
    int rev = 0;
    int num;
    cin >> num;
    while(num!=0){
        rev = num%10 + rev*10;
        num = num/10;
    }
    cout << rev;
    return 0;
}