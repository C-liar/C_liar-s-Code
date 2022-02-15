#include<bits/stdc++.h>
#define aa 200
 
using namespace std;
//
int n,m,q;
int stronger_than[aa];
int alive;

int main(){
	//
	cin>>n>>m;
	alive=n;
	while(m){
		int u,v;
		scanf("%d%d",&u,&v);
		if(u>v){
			//stronger_than[v]++;
			if(!stronger_than[v]){
				alive--;
			}
			stronger_than[v]++;
		}
		else{
			if(!stronger_than[u]){
				alive--;
			}
			stronger_than[u]++;
		}
		m--;
	}
	cin>>q;
	while(q){
		int operation;
		cin>>operation;
		switch (operation) {
			case 1:
				int u,v;
				scanf("%d%d",&u,&v);
				if(u>v){
					if(!stronger_than[v]){
						alive--;
					}
					stronger_than[v]++;
				}
				else{
					if(!stronger_than[u]){
						alive--;
					}
					stronger_than[u]++;
				}
				break;
			case 2:
				int uu,vv;
				scanf("%d%d",&uu,&vv);
				if(uu>vv){
					if(stronger_than[vv]==1){
						alive++;
					}
					stronger_than[vv]--;
				}
				else{
					if(stronger_than[uu]==1){
						alive++;
					}
					stronger_than[uu]--;
				}
				break;
			default:
				cout<<alive<<endl;
				break;
		}
		q--;
	}
	return 0;
}
//ac!
