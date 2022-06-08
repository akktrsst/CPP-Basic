// Given an array of length N, you need to find and print the sum of all elements of the array.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^6
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26

#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
  int n,i;
    cin>>n;
    long int sum[10000000];
    for(int i=1;i<=n;i++)
    {
        cin>>sum[i];
    }
    long int s=0;
    for(int i=1;i<=n;i++)
    {
      s=sum[i]+s;
    }
    cout<<s;
}
