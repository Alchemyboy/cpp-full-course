#include<iostream>
using namespace std;
int main(){
    cout<<"POST - Increement operator";
    cout<<endl;
    int x = 4;
    cout<<x<<endl;         // POST - Increement operator ( increase by 1 i.e + 1 )   
    cout<<x++<<endl;
    cout<<x<<endl;
    
    cout<<"PRE - Increement operator";
    cout<<endl;
    int y = 4;
    cout<<y<<endl;
    cout<<++y<<endl;     // PRE - Increement operator     
    cout<<y<<endl;
}