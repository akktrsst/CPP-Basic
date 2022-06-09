// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
// Input Format :
// First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
// Output Format :
// Sum of every ith column elements (separated by space)
// Constraints :
// 1 <= M, N <= 10^3
// Sample Input :
// 4 2 1 2 3 4 5 6 7 8
// Sample Output :
// 16 20

#include<iostream>
using namespace std;
int main(){
    int numRows;
    int numCols;
    cin>>numRows>>numCols;
    int input[numRows][numCols];
    for(int i =0; i<numRows; i++){
        for(int j=0; j<numCols; j++){
            cin>>input[i][j];
        }
    }
    for(int j=0; j<numCols; j++){
        int sum=0;
        for(int i=0; i<numRows;i++){
            sum+=input[i][j];
        }
        cout<<sum<<" ";
    }
}