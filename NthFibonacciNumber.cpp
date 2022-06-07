#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int a=1,b=1;
int c,i;
if (n==1)
{
    cout<<"1";
}
else if(n==2)
{
    cout<<"1";
}
    else if (n>=3)
    {
for(i=3;i<=n;i++)
{
	c=a+b;
	a=b;
	b=c;

}
	cout<<c;
    }
}  
