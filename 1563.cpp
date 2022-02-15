#include<bits/stdc++.h>
#define aa 100010
using namespace std;
//
int n,m;
int point;
struct Man{
	int turn;
	string zhiye;
}man[aa];

int main(){
	//
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&man[i].turn);
		cin>>man[i].zhiye;
	}
	point=1;
	while(m){
		int ai,si;
		scanf("%d%d",&ai,&si);
		if((!man[point].turn&&!ai)||
		(man[point].turn&&ai)){//-
			if(point-si<1){
				point=point-si+n;
			}
			else{
				point-=si;
			}
		}else{
			if(point+si>n){
				point=point+si-n;
			}
			else{
				point+=si;
			}
		}
		m--;
	}
	cout<<man[point].zhiye;
	return 0;
}
//sample #1 line 4
//hhh,what's the "mengbier"??? hahaha...
//ac!
