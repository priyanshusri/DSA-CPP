//lcm of two numbers
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int lcm = max(a,b);
    while(lcm%a!=0 || lcm%b!=0){
        lcm++;
    }
    cout << "Lcm of a and b is : " << lcm;
    return 0;
}