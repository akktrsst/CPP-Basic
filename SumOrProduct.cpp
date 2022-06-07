#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int c;
    cin>>c;
    if(c==1)
    {
        int i=1;
        int sum=0;
        for(;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    else if(c==2)
    {
        int j=1;
        int pro=1;
        for(;j<=n;j++)
        {
            pro=pro*j;
        }
        cout<<pro<<endl;
    }
    else if(c!=1||c!=2)
    {
        
        cout<<"-1"<<endl;
    }
    
}
