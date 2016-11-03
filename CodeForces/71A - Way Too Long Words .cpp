#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
int a ;
cin>>a ;
string sentence[a];
 for (int i=0;i<a;i++){
    cin >> sentence[i];
 }
 for (int i=0;i<a;i++)
 {


                if(sentence[i].length()<=10
                   )
                    {cout<<sentence[i]<<endl;}

                else
                    {
                    cout << sentence[i][0];
                    cout << sentence[i].length()-2;
                    int a=sentence[i].length();
                    cout<<sentence[i][a-1]<<endl;
                }
            }
   return 0 ;
 }