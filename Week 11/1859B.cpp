#include<bits/stdc++.h>
using namespace std;
int n,t,m;
long long a[50005]; 
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long mi=1e9+1,Mi=1e9+1;
		long long ans=0;
		for(int i=1;i<=n;i++){
			cin>>m;
			for(int j=1;j<=m;j++)cin>>a[j];
			sort(a+1,a+m+1);
			mi=min(mi,a[2]);
			Mi=min(Mi,a[1]);
			ans+=a[2];
		}
		cout<<ans+Mi-mi<<endl;
	}
	return 0;
}