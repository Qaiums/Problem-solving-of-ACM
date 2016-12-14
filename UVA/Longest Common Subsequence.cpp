#include <bits/stdc++.h>
    using namespace std;
    const int sz  = 1010;
    string x,y;
    char b[sz][sz];
    int C[sz][sz];
    int LCSLength(int m,int n)
    {
        string X=x,Y=y;
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0 || j==0)
                    {
                    C[i][j] = 0;

             }
            }
        }

        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
            if(X[i]==Y[j]){
                C[i][j]=C[i-1][j-1]+1;
                b[i][j]= 'c';
                }

             else if(C[i-1][j]>=C[i][j-1])
                 {
                        C[i][j]=C[i-1][j];
                        b[i][j]='u';
                 }
                else
                {

                     C[i][j]=C[i][j-1];
                     b[i][j]='l';
                }

            }

        }
    return C[m][n];
    }
    int main()
    {

        int LCS=0;
        while( getline(cin,x),
            getline(cin,y)){


            x = " " + x;
            y = " " + y;

            int m = x.size()-1;
            int n = y.size()-1;
            LCS = LCSLength(m,n);

            cout <<LCS<<endl;
        }

        return 0;
    }