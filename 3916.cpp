
//#8 TLE
//I have tried read,scanf,printf...
//but it still TLE

#include<bits/stdc++.h> //all
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

//fast read,found it online
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}

inline void add(int from,int to){
	nedge++;
	edge[nedge].next=head[from];
	edge[nedge].to=to;
	//
	head[from]=nedge;
	//num[from]++;
}

int maxto=0;


inline void dfs(int ii){//
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
		u=read();
		v=read();
		add(u,v);
		//
	}
	/*for(int i=0;i<M;i++){
		cout<<head[i];
		//
	}*/
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			dfs(i);
			memset(visited,0,sizeof(visited));//
			printf("%d ",maxto);//
			maxto=0;
			//
		}
		//
	}
	return 0;
}
//90 
