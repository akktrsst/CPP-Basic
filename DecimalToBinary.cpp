#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    long rem=0,pv=1,ans=0;
    while(n>=1)
    {
        rem=n%2;
        ans=ans+rem*pv;
        pv=pv*10;
        n=n/2;
    }
    cout<<ans;
}