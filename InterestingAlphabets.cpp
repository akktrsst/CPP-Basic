// Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// Input format :
// N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 26
// Sample Input 1:
// 8
// Sample Output 1:
// H
// GH
// FGH
// EFGH
// DEFGH
// CDEFGH
// BCDEFGH
// ABCDEFGH
// Sample Input 2:
// 7
// Sample Output 2:
// G
// FG
// EFG
// DEFG
// CDEFG
// BCDEFG
// ABCDEFG
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n+1){
        int j=1;
        char ch='A'+n-i+1;
        while(j<i){
            char k=ch+j-1;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
}