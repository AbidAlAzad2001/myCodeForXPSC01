#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
		int l = 1, r = n, _ = 1;
		while (l <= r) cout << ((_ ^= 1) ? l++ : r--) << ' ';
		cout << endl;
    }

    return 0;
}