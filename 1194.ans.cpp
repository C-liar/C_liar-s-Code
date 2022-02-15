#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,flag,px,py,ans,f[10000];
struct p{
	int x,y,z;
}a[250008];
int find(int x){
	if (x==f[x]) return x;
	return f[x]=find(f[x]);
}
bool cmp(p a,p b){
	return a.z<b.z;
} 
int main(){
	scanf("%d%d",&n,&m);
	for (int i=0;i<=m;i++) f[i]=i;
	for (int i=1;i<=m;i++){
		cnt++;
		a[cnt].x=0;
		a[cnt].y=i;
		a[cnt].z=n;
	} 
	for (int i=1;i<=m;i++)
		for (int j=1;j<=m;j++)
	{	
		scanf("%d",&flag);
		if (flag){
			cnt++;
			a[cnt].x=i;
			a[cnt].y=j;
			a[cnt].z=flag;	
		} 
	}
	sort(a+1,a+cnt+1,cmp);
	for (int i=1;i<=cnt;i++){
		px=find(a[i].x);
		py=find(a[i].y);
		if (px==py) continue;
		f[px]=py;
		ans+=a[i].z;
	}
	printf("%d\n",ans);
	return 0;
}
