#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
#include<algorithm>
using namespace std;
#define aa 100010
//
int n,m,k;
//n:point;m:edge;k:surplus;
struct carpet{//di'tan
	int u,v,w;
}c[aa];//
int father[aa];

bool cmp(carpet a,carpet b){
	return a.w>b.w;
}
int find(int x){
	if(father[x]!=x){
		father[x]=find(father[x]);
		//
	}
	return father[x];
}
void UN(int &a,int &b){
	a=find(a);b=find(b);
	father[a]=b;
}
//c[i].u=U>c[i].u?U:c[i].u;
int main(){
	//
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		int U,V,W;
		cin>>U>>V>>W;
		c[i].u=U>c[i].u?U:c[i].u;
		c[i].v=V>c[i].v?V:c[i].v;
		c[i].w=W>c[i].w?W:c[i].w;
		//
	}
	//----kruskal----
	for(int i=1;i<=n;i++){
		father[i]=i;
		//
	}
	int tot=0;
	sort(c+1,c+1+m,cmp);
	int K=0;
	for(int i=1;i<=m;i++){
		if(father[c[i].u]!=father[c[i].v]){
			UN(c[i].u,c[i].v);
			tot+=c[i].w;
			K++;
			if(K==k){
				break;
				//
			}
			//
		}
		//
	}
	//
	cout<<tot;
	
	return 0;
}
