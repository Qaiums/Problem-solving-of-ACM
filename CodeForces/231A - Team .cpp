#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;


int main ()
{
    int a=0;
    int c=0;

    cin>>a;
    string inputs[a+1];
    for (int i=0;i<=a;i++)

    {
        getline(cin,inputs[i]);
        if ((inputs[i]=="1 1 0")||(inputs[i]=="1 1 1")||(inputs[i]=="0 1 1")||(inputs[i]=="1 0 1"))c=c+1;
    }
    cout<<c ;

    return 0 ;

}