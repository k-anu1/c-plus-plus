#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"before swapping";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping"<<endl<<a<<endl<<b;

}