#include<bits/stdc++.h>
#define na 100010
#define ma 1000010
using namespace std;
//
int n,m;
struct edge{
	int from,to;
};
vector<int>q[na];
vector<edge>s;
inline bool cmp(edge a,edge b){
	if(a.to==b.to){
		return a.from<b.from;
	}
	return a.to<b.to;
}
int dfs_vis[na],bfs_vis[na];
inline void dfs(int from){
	dfs_vis[from]=1;
	printf("%d ",from);
	for(int i=0;i<q[from].size();i++){
		if(!dfs_vis[s[q[from][i]].to]){//
			dfs(s[q[from][i]].to);
		}
	}
}
queue<int>p;
inline void bfs(){
	while(!p.empty()){
		int from=p.front();
		p.pop();
		if(bfs_vis[from]){
			continue;
		}
		printf("%d ",from);
		bfs_vis[from]=1;
		for(int i=0;i<q[from].size();i++){
			int o=s[q[from][i]].to;
			if(!bfs_vis[o]){
				p.push(o);
			}
		}
	}
}
int main(){
	//
	cin>>n>>m;
	//s.push_back((edge){0,0});
	for(register int i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		s.push_back((edge){x,y});
	}
	
	sort(s.begin(),s.end(),cmp);//right
	/*{
	for(int i=0;i<m;i++){
		cout<<s[i].from<<" "<<s[i].to<<' ';
	}
	cout<<endl;
	}*/
	
	for(register int i=0;i<m;i++){//
		int from=s[i].from;//start
		q[from].push_back(i);
	}
	/*{
	for(int i=1;i<=m;i++){//from
		for(int j=0;j<q[i].size();j++){
			cout<<q[i][j]<<' ';
		}
		cout<<endl;
	}
	}*/
	//cout<<endl;
	dfs(1);
	cout<<endl;
	p.push(1);
	bfs();
	return 0;
}
//ac
