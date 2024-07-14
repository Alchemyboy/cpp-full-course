#include<iostream>
using namespace std;
int main(){
    int x = 5 ;
    cout<<x<<endl;
    cout<<x*x;
    cout<<endl;
    x = 3 ;    // change of variable
    cout<<x<<endl;
    // New(x) = old(x) + something
    x = x + 4;
    cout<<x<<endl;
    // New(x) = old(x) - something
    x = x - 20;
    cout<<x<<endl;
    // x = x + 2; x = 20
    x += 2;          // merge operators
    cout<<x<<endl;
    x = x*80;   // x = 2
    cout<<x<<endl;
    x = x % 3;  // x = -880
    cout<<x<<endl;
    x += 2;    // x = -1 
    cout<<x<<endl;
}