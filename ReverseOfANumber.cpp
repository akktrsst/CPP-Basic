#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int rev=0;
    while(n>=1)
    { 
        rev=rev*10+(n%10);
        n=n/10;
    }
    cout<<rev;
    
}
