#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]<=a[0]+a[1])
            cout<<(a[0]+a[1]+a[2])/2<<endl;
        else    
            cout<<a[0]+a[1]<<endl;

    }

    return 0;
}
/*
4 7 10
4+7=11>10
4+7+10 = 21
21/2 = 10

1 4 8
1+4 = 5<8
1+4 = 5

2 8 8
2+8>8
2+8+8=18
18/2 = 9

*/