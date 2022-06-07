#include <iostream>
using namespace std;

int main(){
char c;
c=cin.get();
int count =0;
int space =0;
int number=0;
while(c!='$')
{
	if(c>='0'&&c<='9')
	{
	  number++; 
	} 
	else if(c==' '||c=='\t'||c=='\n')
	{
		space++;
	}
	count++;
	c=cin.get();
}
cout<<(count-number-space)<<" "<<number<<" "<<space<<endl;
}
