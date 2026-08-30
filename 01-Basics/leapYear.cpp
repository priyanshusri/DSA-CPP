//Leap year check
#include <iostream>
using namespace std;

void checkLeapYear(int year){
    
    if(year%4==0 && (year%100!=0 || year%400) ){
        cout << year << " is a leap year";
    }
}
int main(){
checkLeapYear(2020);
return 0;
}