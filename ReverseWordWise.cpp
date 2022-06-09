// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
// Input format :
// String in a single line
// Output format :
// Word wise reversed string in a single line
// Constraints :
// 0 <= |S| <= 10^7
// where |S| represents the length of string, S.
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// code your indent Always

#include <iostream>
using namespace std;

void reverseStringWordWise(char input[]) {
    // Write your code here
  int len=0;
int l=0;
while(input[l] !='\0')
{
	len++;
	l++;
}
    int i=0,j=len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int k=0;
    while(k<=len)
    {
       	int start=k;
        while(input[k]!=' ' && input[k]!='\0')
        {
            k++;
        }
        int end=k-1;
        while(start<end)
        {
            char word=input[start];
        	input[start]=input[end];
        	input[end]=word;
        	start++;
        	end--;
        }
        k++;
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}