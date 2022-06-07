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
