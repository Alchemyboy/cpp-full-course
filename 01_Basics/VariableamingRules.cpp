#include<iostream>
using namespace std;
int main(){
    int x = 3;        // Keywords cannot be used as identifiers ...... 32 keywords 
    cout<<x<<endl;
    int y1 = 5;         // 1y is error
    cout<<y1<<endl;
    int _1 = 6;         // 1_ is error
    cout<<_1<<endl;
    int $22 = 7;        // 1$ is allowed Any other symbol after or before other than $ is error
    cout<<$22<<endl; 
    // Any other special character after or before other than $ or _ is error

    // int x y = 3;          // E R R O R 
    // cout<<x y;
    // int x,y = 3;          // E R R O R 
    // cout<<x,y;
}

// KEYWORDs in C++ :->     
// auto      double       int      break     extern     enum      unsigned     while
// case      sizeof       for      const     static     long      continue     float
// else      signed       do       short     switch     char      volatile     default 
// goto      struct       if       union     return     void      register     typedef
