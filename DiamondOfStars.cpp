// Print the following pattern for the given number of rows.
// Note: N is always odd.


// Pattern for N = 5



// The dots represent spaces.



// Input format :
// N (Total no. of rows and can only be odd)
// Output format :
// Pattern in N lines
// Constraints :
// 1 <= N <= 49
// Sample Input 1:
// 5
// Sample Output 1:
//   *
//  ***
// *****
//  ***
//   *
#include<iostream>
using namespace std;
int main() {
     int n;
    cin>>n;
    int i=1;
    int n1= (n+1)/2;
    int n2= n/2;
    while(i<=n1)
    {
        int spaces=1;
        while(spaces<=n1-i)
        {
            cout<< ' ';
            spaces=spaces+1;     
        }
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
 j=j-2;
        while(j>=1)
        {
          
            cout<<"*";
              j=j-1;
        }
        
        cout<<endl;
        i++;
    }
    int m=1;
      while(m<=n2)
    {
        int mspaces=1;
        while(mspaces<=m)
        {
            cout<< ' ';
            mspaces=mspaces+1;     
        }
        int mj=1;
        while (mj<=n2-m+1)
        {
            cout<<"*";
            mj++;
        }
 mj=mj-2;
        while(mj>=1)
        {
          
            cout<<"*";
              mj=mj-1;
        }
        
        cout<<endl;
        m++;
    }
}