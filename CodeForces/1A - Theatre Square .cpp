#include<iostream>
using namespace std ;
int main ()
{
    long long h,w,a,b;
    cin>>h;
    cin>>w;
    cin>>a;
if (h%a==0) h=h/a; else h=(h/a)+1;

if (w%a==0) w=w/a; else w=(w/a)+1;

b=h*w;
cout<<b;
}