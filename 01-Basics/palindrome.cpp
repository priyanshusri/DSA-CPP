//Palindrome of a number
#include <iostream>
using namespace std;
int main(){
    int rev = 0;
    int num;
    cin >> num;
    int org = num;

    while (num!=0){
        rev = num%10 + rev*10;
        num = num/10;
    }
    if(rev==org){
        cout << "Palindrome number";
    }
    else{
        cout << "Not a palindrome number";
    }
    return 0;
}