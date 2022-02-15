#include<bits/stdc++.h>
#define na 100010
#define ma 1000010
//#define main mian
//#define mian main
using namespace std;
//
int n,m;
bool vis_dfs[na],vis_bfs[na];

//vector<vector<int> >p;
//vector<int>p[na];
/**/
struct Edge{
	int next;int to;int num;
}edge[ma];
int head[na];
int edge_num;

//int out[na];
inline bool cmp(Edge a,Edge b){
	if(a.to==a.to){
		return a.num<b.num;
	}
	return a.to<b.to;
} 
stack<int>s;
inline void dfs(){
	int from=s.top();
	s.pop();
	vis_dfs[from]=1;
	printf("%d ",from);
	for(int i=head[from];i;i=edge[i].next){
		if(vis_dfs[edge[i].to]==0){
			//dfs(edge[i].to);
			s.push(edge[i].to);
		}
	}
	if(!s.empty()){
		dfs();
	}
}
queue<int>q;
stack<int>p;
inline void bfs(){
	while(!q.empty()){
		int from=q.front();
		q.pop();
		if(!vis_bfs[from]){
			vis_bfs[from]=1;
			printf("%d ",from);
			for(int i=head[from];i;i=edge[i].next){
				if(vis_bfs[edge[i].to]==0){
					//q.push(edge[i].to);
					p.push(edge[i].to);
				}
			}
			while(!p.empty()){
				q.push(p.top());
				p.pop();
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(register int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		edge[++edge_num].next=head[x];
		head[x]=edge_num;
		edge[edge_num].to=y;
		edge[edge_num].num=edge_num;
	}
	sort(edge+1,edge+1+m,cmp);
	s.push(1);
	dfs();
	cout<<endl;
	q.push(1);
	bfs();
	//
	return 0;
}
//wa
//sample
