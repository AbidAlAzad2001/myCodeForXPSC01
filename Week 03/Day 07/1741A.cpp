#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
  if(c=='S') return -1;
  if(c=='M') return 0;
  if(c=='L') return 1;
}
 
int main()
{
  int t;
  cin>>t;
  while(t--){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
     
    int a= n1 * prec(s1[n1-1]);
    int b=(n2) * prec(s2[n2-1]);
    if(a==b) cout<<"="<<endl;
    else if(a>b) cout<<">"<<endl;
    else cout<<"<"<<endl;
  }

    return 0;
}