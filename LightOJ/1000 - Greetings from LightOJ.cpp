#include<iostream>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        cin>>b;
        a=a+b;
        cout<<"Case "<<i<<": "<<a<<endl;
    }
    return 0;
}
 