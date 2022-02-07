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
#define INF 0x7fffffff;
const int NUM=100001;
using namespace std;
//
bool visited[NUM];// 

struct Edge{
	int next,to;//,dis;
}edge[NUM];

int N,M;//,num[NUM];

int head[NUM],nedge;

void add(int from,int to){
	nedge++;
	edge[nedge].next=head[from];
	edge[nedge].to=to;
	//
	head[from]=nedge;
	//num[from]++;
}

int maxto=0;


void dfs(int ii){//
	visited[ii]=1;
	maxto=maxto>ii?maxto:ii;
	for(int i=head[ii];i!=0;i=edge[i].next){//
		maxto=maxto>edge[i].to?maxto:edge[i].to;//<-gaidong 
		//bijiao meigejiedian bingshuchu zuidazhi
		if(!visited[edge[i].to]){//
			dfs(edge[i].to);
			//
		}
		//
	}
}

int main(){
	//
	cin>>N>>M;
	for(int i=1;i<=M;i++){//
		int u,v;
		cin>>u>>v;
		add(u,v);
		//
	}
	/*for(int i=0;i<M;i++){
		cout<<head[i];
		//
	}*/
	for(int i=1;i<=N;i++){//bianli 1~N dejiedian 
		if(!visited[i]){
			dfs(i);//sousuo,bing
			memset(visited,0,sizeof(visited));//
			cout<<maxto<<" ";//
			maxto=0;
			//
		}
		//
	}
	return 0;
}
