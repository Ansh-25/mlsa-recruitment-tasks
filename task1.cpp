#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    if(z>=(x-(y%x)))
    cout<<"YES";
    else cout<<"NO";
	return 0;
}
