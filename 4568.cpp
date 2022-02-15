#include<bits/stdc++.h>
#define amk 2500001
#define an 110010
#define mp(a,b) make_pair((a),(b))
using namespace std;

int n,m,k,s,t;
struct Flight{
	int next,to,dis;
}flight[amk];
int head[an],fnum=-1;//

int dis[an];
bool visited[an];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;

inline void add(int from,int to,int dis){
	flight[++fnum].next=head[from];
	//2 3 5
	//2 3 3  ???
	flight[fnum].to=to;
	flight[fnum].dis=dis;
	head[from]=fnum;
}
inline void dij(){
	while(!pq.empty()){
		int u=pq.top().second;
		pq.pop();
		//first=dis[u]
		if(!visited[u]){
			visited[u]=1;//white
			for(int i=head[u];i;i=flight[i].next){
				if(!visited[flight[i].to]&&dis[flight[i].to]>dis[u]+flight[i].dis){
					dis[flight[i].to]=dis[u]+flight[i].dis;
					pq.push(mp(dis[flight[i].to],flight[i].to));
				}
			}
		}
	}
}

int main(){
	cin>>n>>m>>k>>s>>t;
	for(int i=1;i<=m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		add(a,b,c);
		add(b,a,c);
		for(int j=1;j<=k;j++){
			add(a+(j-1)*n,b+j*n,0);
			add(b+(j-1)*n,a+j*n,0);
			add(a+j*n,b+j*n,c);
			add(b+j*n,a+j*n,c);
		}
	}
	for(int i=1;i<=k;i++){
		add(t+(i-1)*k,t+i*k,0);
	}
	memset(dis,0x7f,sizeof(dis));
	dis[s]=0;
	//pq.push(s);  make_pair(dis[s],s);
	pq.push(mp(0,s));
	dij();
	cout<<dis[t+n*k];
	return 0;
}
//#3 #4 #8 wa
