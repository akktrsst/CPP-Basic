#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int i=1, curr=1;
    while(i<=x){
        int l=3*curr+2;
        if(l%4!=0)
        {
            cout<<l<<" ";
            i++;
        }
        curr++;
    }
    
}