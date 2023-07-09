#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int o=0,e=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0)
            e++;
        else
            o++;
    }
    cout<<min(e,o)<<endl;

    return 0;
}