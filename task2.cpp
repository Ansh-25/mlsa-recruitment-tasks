#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{ 
    int n=0,k=0,count=0;
    int flag,j,i,m;
    cin>>n>>k;
    char s[n],str[k];
    cin>>s;
    for(int t=0 ;t < k ; t++)
    cin>>str[t];
    for(j=0;j<=n;j++)
    {flag=1;
        for (i = j ; i < n ; i++)
        {
            if(flag==0)
            break;
                for(m=0 ; m < k ; m++)
                {
                    if(s[i]==str[m])
                    {
                        flag=1;
                        count++;
                        break;
                    }
                    else flag=0;
                }   
        }
    }
    cout<<count;    
    
}


