// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)

// Output format : Pattern in N lines

// Sample Input :
// 5
// Sample Output :
//         1
//        212
//       32123
//      4321234
//     543212345
#include<iostream>
using namespace std;

int main(){

  // Write your code here  
int n,i,s,j,k,d;
    cin>>n;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        k=i;
        for(j=1;j<=i;j++){
            cout<<k;
            k--;
        }
        d=2;
        for(int m=2;m<=i;m++){
            cout<<d;
            d++;
        }
        cout<<endl;
}
} 
