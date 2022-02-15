#include<bits/stdc++.h>
#define aa 100000010
using namespace std;
//
int n,q;
int prime[5761456];
int count_p;//amount of prime
bool visit[aa];
//5761455 primes in 1~1e8

int main(){
	//
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		if(!visit[i]){
			prime[++count_p]=i;
		}
		for(int j=1;j<=count_p&&i*prime[j]<=n;j++){
			visit[i*prime[j]]=1;
			if(i%prime[j]==0){
				break;
			}
		}
	}
	while(q){
		int k;
		scanf("%d",&k);
		printf("%d\n",prime[k]);
		q--;
	}
	return 0;
}
//ac!
