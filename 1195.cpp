#include<bits/stdc++.h>

using namespace std;
//
int N,M,K,fa[10010];
struct cloud{
	int x,y,l;
}c[10010];
bool cmp(cloud a,cloud b){
	return a.l<b.l;
}
int find(int a){
	if(fa[a]!=a){
		fa[a]=find(fa[a]);
		//important
	}
	return fa[a];
}
void un(int a,int b){
	int aa=find(a);
	int bb=find(b);
	fa[aa]=bb;
}

int main(){
	//
	cin>>N>>M>>K; 
	for(int i=1;i<=M;i++){
		c[i].l=0;
	}
	for(int i=1;i<=M;i++){
		cin>>c[i].x>>c[i].y>>c[i].l;
	}
	for(int i=1;i<=M;i++){
		fa[i]=i;
	}
	sort(c+1,c+1+M,cmp);
	int total=0,k=0;
	for(int i=1;i<=M;i++){
		if(find(c[i].x)!=find(c[i].y)){
			un(find(c[i].x),find(c[i].y));
			total+=c[i].l;//38xxx
			k++;
			if(k==N-K){
				break;
			}
		}
	}
	if(total>=1342177){
		cout<<"No Answer";
		return 0;
	}
	cout<<total;
	return 0;
}
