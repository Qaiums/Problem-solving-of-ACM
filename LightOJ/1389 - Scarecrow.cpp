#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int t,n;
 
 
    string rePra;
    cin>>t;
 
 
for(int i=1;i<=t;i++)
    {
    int nofdot=0;
     cin>>n ;
     cin>>rePra;
      for (int j=0;j<n;j++)
      {
 
         if(rePra[j]=='.')
         {
          rePra[j+1]='#';
          nofdot+=1 ;
          j+=2;
         }
          }
          cout<<"Case "<<i<<": "<<nofdot<<endl ;
 
      }
 
return 0 ;
 
    }
 