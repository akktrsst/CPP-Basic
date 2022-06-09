// Print the following pattern for given number of rows.
// Input format :

// Line 1 : N (Total number of rows)

// Sample Input :
//    5
// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int numStars=0;
    int row=1;
    while(row<=n){
        int value=1;
        while(value<=n-row+1){
            cout<<value;
            value+=1;
        }
        int stars=1;
        while(stars<=numStars){
            cout<<"*";
            stars+=1;
        }
        value=n-row+1;
        while(value>=1){
            cout<<value;
            value-=1;
        }
        cout<<endl;
        row+=1;
        numStars+=2;
    }
}