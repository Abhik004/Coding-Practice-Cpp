#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
	    int a;
	    cin>>a;
	    if (a<=100)
	    {
	        cout<<a<<endl;
	    }
	    else
	    {
	        cout<<(a-10)<<endl;
	    }
	}
	return 0;
}
