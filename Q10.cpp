#include<iostream>
using namespace std;
int main()
{
    int a[100],n,sum=0,i;
    cout<<"Enter size of Array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
}