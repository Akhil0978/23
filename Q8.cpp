#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first no : ";
    cin>>a;
    cout<<"Enter second no : ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"The swaped varibale are : "<< a << b <<endl;
}