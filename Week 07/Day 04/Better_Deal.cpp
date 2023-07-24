#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int p=100-a;
	    int q=200-(b*2);
	    if(p<q){
	        cout<<"FIRST\n";
	    }
	    else if(q<p){
	        cout<<"SECOND\n";
	    }
	    else{
	        cout<<"BOTH\n";
	    }
	}
	return 0;
}