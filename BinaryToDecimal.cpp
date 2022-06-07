#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int pv=1,ans=0;
    while(n>=1)
    {
        ans= ans+pv*(n%10);
        pv=pv*2;
        n=n/10;
    }
    cout<<ans;
}
