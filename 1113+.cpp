#include<bits/stdc++.h>
#define num 10010
using namespace std;
//
int n,len[num],ans;

int main(){
	//
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&i);
		
		scanf("%d",&len[i]);
		int numm=0;
		int t=0;scanf("%d",&t);
		while(t){
			numm=numm>len[t]?numm:len[t];
			scanf("%d",&t);
		}
		len[i]=numm+len[i];
		ans=ans>len[i]?ans:len[i];
	}
	cout<<ans;
	return 0;
}
//ac
