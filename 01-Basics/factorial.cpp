//factorial of a number
#include <iostream>
using namespace std;
int main(){
    int fact = 1;
    int n;
    cin >> n;
    for(int i =1;i<=n;i++){
        fact = fact *i;
    }
    cout << "factorial of the number is : " << fact;
    return 0;
}