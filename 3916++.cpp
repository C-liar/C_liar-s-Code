#include<bits/stdc++.h>
#define aa 100010
using namespace std;
//
int n,m;
struct Edge{
	int to;
	int next;
}edge[aa];//for exercise
int head[aa];
int edge_num;
int max_A[aa];

inline void add(int from,int to){
	edge[++edge_num].next=head[from];
	head[from]=edge_num;
	edge[edge_num].to=to;
}
inline void dfs(int from,int maxx){
	if(max_A[from]){
		return;
	}
	max_A[from]=maxx;
	for(int i=head[from];i;i=edge[i].next){
		dfs(edge[i].to,maxx);
	}
}

int main(){
	//
	cin>>n>>m;
	for(register int i=1;i<=m;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		add(v,u);
	}
	for(register int i=n;i;i--){
		dfs(i,i);
	}
	for(register int i=1;i<=n;i++){
		printf("%d ",max_A[i]);
	}
	return 0;
}
//AC 
