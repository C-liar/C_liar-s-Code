#include<bits/stdc++.h>
#define aa 100010
using namespace std;
//
int n,m;
struct Edge{
	int x,y;
};
vector<int>data[aa];
//data[i][j]=k:i---jth--->k
int out[aa];
//out[n]=times:num out of n is times;
vector<Edge>edge;//edge
bool cmp(Edge a,Edge b){
	if(a.y==b.y){
		return a.x<b.x;
	}
	else return a.y<b.y;
}
bool visited[aa];
void dfs(int aaa){
	visited[aaa]=1;
	int times=0;
	printf("%d ",aaa);
	for(int i=1;times<out[aaa];i++){
		int num=data[aaa][++times];
		//printf("%d ",num);
		if(!visited[num]){
			dfs(num);
		}
	}
}
void bfs(int aaa){
	visited[aaa]=1;
	queue<int>q;
	//int times=0,num=0;
	printf("%d ",aaa);
	q.push(aaa);
	while(!q.empty()){
		int num=q.front();
		q.pop();
		int times=0;
		for(int i=1;times<out[num];i++){
			int num_2=data[num][++times];
			if(!visited[num_2]){
				visited[num_2]=1;
				q.push(num_2);
				printf("%d ",num_2);
			}
		}
	}
	/*for(int i=1;times<out[aaa];i++){
		num=data[aaa][++times];
		q.push(num);
		//printf("%d ",num);
	}*/
	//bfs();
}
//
int main(){
	//
	cin>>n>>m;
	//
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		edge.push_back(Edge{u,v});
		//ans
		/*
		edge[i].x=u;
		edge[i].y=v;
	}*/
	}
	//
	sort(edge.begin()+1,edge.end()+1,cmp);
	for(int i=1;i<=int(edge.size());i++){
		out[i]++;
		//data[edge[i].x][out[i]]=edge[i].y;
		data[out[i]].push_back(edge[i].y);
	}
	//
	dfs(1);
	printf("\n");
	memset(visited,0,sizeof(visited));
	bfs(1);
	return 0;
}
//wa
