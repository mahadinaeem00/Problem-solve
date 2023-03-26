#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;

	    if((a+b)>6)
	        cout<<"YES"<<endl;

	   else
	     cout<<"NO"<<endl;
	}

	return 0;
}

