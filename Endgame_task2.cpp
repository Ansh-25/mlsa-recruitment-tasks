#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(__gcd(a,b)!=1)
    {
        a/=__gcd(a,b);
    }
    cout<<a;
    return 0;
}
