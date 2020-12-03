#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
        char a[1000][1000];
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n-1; i++){
            for(int j=m-1; j<m; j++)
            {
                if(a[i][j] == 'R')
                {
                    k++;
                    a[i][j] = 'D';
                }
            }
        }
        for(int i=n-1; i<n; i++)
        {
            for(int j=0; j<m-1; j++)
            {
                if(a[i][j] == 'D')
                {
                    k++;
                    a[i][j] = 'R';
                }
            }
        }
        cout<<k<<endl;
    return 0;
}