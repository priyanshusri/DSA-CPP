//GCD of two numbers
#include <iostream> 
using namespace std;
int main(){
    int a , b;
    cin >> a;
    cin >> b;
    if(a==0 && b==0){
        cout << "Undefined";
        return 0;
    }
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD is : " << a ;
    return 0;
        
}