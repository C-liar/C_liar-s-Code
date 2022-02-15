#include<bits/stdc++.h>
#define aa 100010
#define inf 0xfffffff
using namespace std;
stack<int>s; 
//
int n,m,nedge;
struct Edge{
	int u,v,w;
	//num:num of edge
}edge[2*aa];
//edge[edge_num]=
//that edge is from u to v and dis is w;
int in[aa],out[aa],head[aa*2];
double dis[aa];



int main(){
	//
	cin>>n>>m;
	/*
	for(int i=1;i<=m;i++){
		edge[i].u=inf;
		edge[i].v=inf;
		edge[i].w=inf;
	}*/
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		in[v]++;out[u]++;
		
	}
	for(int i=1;i<=n;i++){
		dis[i]=inf;
	}
	dis[1]=0;
	//toposort
	s.push(1);
	while(!s.empty()){
		
	}
	return 0;
}
