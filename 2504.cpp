#include<bits/stdc++.h>
#define aa 509550
using namespace std;
//
int m,n;
int monkey[505];
int tree_x[1010],tree_y[1010];
struct Tree_dis{
	int a,b;
	double dis;
}tree[aa];
int countar;
//if counter,it will ++ by itself
int father[1010];
double max_dis=0;
int edge=0;
//
bool cmp(Tree_dis c,Tree_dis d){
	return c.dis<d.dis;
}
int findd(int a){
	if(father[a]!=a){
		father[a]=findd(father[a]);
	}
	return father[a];
}
void unionn(int a,int b){
	int fa=findd(a);
	int fb=findd(b);
	father[fb]=fa;
}

int main(){
	//
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>monkey[i];
	}
	sort(monkey+1,monkey+1+m);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tree_x[i]>>tree_y[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			tree[++countar].a=i;
			tree[countar].b=j;
			tree[countar].dis=sqrt((double)((tree_x[i]-tree_x[j])*(tree_x[i]-tree_x[j])+(tree_y[i]-tree_y[j])*(tree_y[i]-tree_y[j])));
		}
	}
	sort(tree+1,tree+1+countar,cmp);
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
	for(int i=1;i<=countar;i++){
		if(findd(tree[i].a)==findd(tree[i].b)){
			continue;
		}
		unionn(tree[i].a,tree[i].b);
		edge++;
		max_dis=tree[i].dis;
		if(edge==n-1){
			break;
		}
	}
	int counta=0;
	for(int i=1;i<=m;i++){
		if(monkey[i]>=max_dis){
			counta++;
		}
	}
	cout<<counta;
	return 0;
}
//wa:line 58 father[] but not findd()
//wa:line 58 father[] but not findd() 
//re:line 2 #define aa 500
//ce:line 58 if()
//wa:line 2 #define aa 500
//ac
