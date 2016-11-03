#include<iostream>
using namespace std ;
int main ()
{
    int caseA=0;
    cin>>caseA;
    if (caseA<=25)
    for (int i=1;i<=caseA;i++)
    {
        int a=0;
        int b=0;
        cin>>a;
     
 
        if (a<=20)
        {
            b=a/2;
            a=a-b;
 
        }
        cout<<a<<" "<<b<<endl;
 
    }
 
}
 
