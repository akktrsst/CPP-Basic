// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
// Print the prime numbers in different lines.
// Input Format :
// Integer N
// Output Format :
// Prime numbers in different lines
// Constraints :
// 1 <= N <= 100
// Sample Input 1:
// 9
// Sample Output 1:
// 2
// 3
// 5
// 7
// Sample Input 2:
// 20
// Sample Output 2:
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19
#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int N;
    cin>>N;
    int n=2;
    for(;n<=N;n++)
    {
        int d=2;
        bool divided = false;
        for (;d<n;d++)
        {
            if (n%d==0)
            {
                divided=true;
            }
        }
        if (divided!=true)
        {
            cout<<n<<endl;
        }
            
    }
  
}
