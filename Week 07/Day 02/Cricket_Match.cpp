#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(m*36>=n)
	        cout<<"YES\n";
	   else
	    cout<<"NO\n";
	}
	return 0;
}