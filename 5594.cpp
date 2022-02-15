#include<bits/stdc++.h>
#define aa 1010
using namespace std;
//
int n,m,k;
int a[aa][aa];
bool visit[aa][aa];
int ans[aa];
int main(){
	//
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int x;
			cin>>x;
			a[i][j]=x;
			//ans[a[i][j]]++;
		}
	}
	for(int i=1;i<=n;i++){//i
		for(int j=1;j<=k;j++){//j
			if(!visit[j][a[i][j]]){
				visit[j][a[i][j]]=1;
				ans[a[i][j]]++;
			}
		}
	}
	for(int i=1;i<=k;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
//ac
