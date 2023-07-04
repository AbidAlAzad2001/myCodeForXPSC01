#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int num = stoi(s);
        int num1 = pow(10,n-1);
        cout<<num-num1<<endl;
    }

    return 0;
}