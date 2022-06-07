#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int r=0,i=0;
    while((i*i)<n)
    {
     
        
        i++;
    }
    if(i*i==n) cout<<i;
    else cout<<i-1;
}
