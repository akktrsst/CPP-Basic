// Print the following pattern for the given number of rows.
// Pattern for N = 4



// The dots represent spaces.



// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//          232
//        34543
//      4567654
//    567898765
// Sample Input 2:
// 4
// Sample Output 2:
//            1
//          232
//        34543
//      4567654
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int currRow=1;
    while(currRow<=n){
        int spaces =1;
        while(spaces <= n-currRow){
            cout<<" ";
            spaces++;
        }
        int currCol=1;
        int val=currRow;
        while(currCol<=currRow){
            cout<<val;
            val++;
            currCol++;
        }
        val=2*(currRow-1);
        while(val>=currRow){
            cout<<val;
            val--;
        }
        cout<<endl;
        currRow++;
    }
}