#include<iostream>//P1443
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;
const int dx[8]={-1,-2,-2,-1,1,2,2,1};
const int dy[8]={2,1,-1,-2,2,1,-1,-2};//8个方向
queue<pair<int,int> > q;
int f[500][500];//存步数
bool vis[500][500];//走没走过
int main()
{
	int n,m,x,y;
	memset(f,-1,sizeof(f));memset(vis,false,sizeof(vis));
	cin>>n>>m>>x>>y;
	f[x][y]=0;vis[x][y]=true;q.push(make_pair(x,y));
	while(!q.empty())
	{
		int xx=q.front().first,yy=q.front().second;q.pop();//取队首并出队
		for(int i=0;i<8;i++)
		{
			int u=xx+dx[i],v=yy+dy[i];
			if(u<1||u>n||v<1||v>m||vis[u][v])continue;//出界或走过就不走
		    vis[u][v]=true;q.push(make_pair(u,v));f[u][v]=f[xx][yy]+1;
		}
	}
	for(int i=1;i<=n;i++)
	 {for(int j=1;j<=m;j++)printf("%-5d",f[i][j]);printf("\n");}//注意场宽！！
	return 0;
}
