#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 2;
    cout<< x + y << endl; // 7
    cout<< x - y << endl; // 3
    cout<< x * y << endl; // 10
    cout<< x / y << endl; // 2.5  // issue
    cout<< x % y << endl; // 1

    // Modulous Operator ( % ) : - Remainder part of the division part
            // Checking of divisibility of any numbers , a % b = 0 
            
    // Important points : -
    // 1) a % b     =  a [ if a < b ]
    // 2) a % a     =  0
    // 3) a % (-b)  =  a % b
    // 4) (-a) % b  =  -[ a % b ]
}
