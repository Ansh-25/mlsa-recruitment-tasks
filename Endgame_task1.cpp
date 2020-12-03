#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<n-1; i++)
        {
           
                if(arr[i][m-1] == 'R')
                {
                    count++;
                    arr[i][m-1] = 'D';
                }
    
        }
        
            for(int j=0; j<m-1; j++)
            {
                if(arr[n-1][j] == 'D')
                {
                    count++;
                    arr[n-1][j] = 'R';
                }
           
        }
        cout<<count<<endl;
    return 0;
}
