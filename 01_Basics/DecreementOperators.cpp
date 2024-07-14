#include<iostream>
using namespace std;
int main(){
    cout<<"POST - Decreement operator";
    cout<<endl;
    int x = 9;
    cout<<x<<endl;
    cout<<x--<<endl;         // POST - Decreement operator ( decrease by 1 i.e - 1 )  
    cout<<x<<endl;

    cout<<"PRE - Decreement operator";
    cout<<endl;
    int y = 9;
    cout<<y<<endl;
    cout<<--y<<endl;         // PRE - Decreement operator ( decrease by 1 i.e - 1 )  
    cout<<y<<endl;
}