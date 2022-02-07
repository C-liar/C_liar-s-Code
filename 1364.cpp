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
using namespace std;
//
int n;
/*struct Tree{
	int num,lc,rc;
}tree[101];//1~n*/
int f[101][101],quan[101],tree[101][101];

void Floyd(){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(k!=i&&i!=j&&k!=j&&tree[i][j]>tree[k][j]+tree[i][k]){
					tree[i][j]=tree[k][j]+tree[i][k];
					//cout<<1;
					//
				}
				//
			}
			//
		}
		//
	}
}

int main(){
	//
	cin>>n;
	//memset(f,0x7fffffff,sizeof(f));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			tree[i][j]=0x7ffffff;
			//
		}
		//
	}
	for(int i=1;i<=n;i++){
		//cin>>tree[i].num>>tree[i].lc>>tree[i].rc;
		//
		int fl,lc,rc;
		cin>>fl>>lc>>rc;
		quan[i]=fl;
		tree[i][i]=0;
		tree[lc][i]=1;tree[rc][i]=1;
		tree[i][lc]=1;tree[i][rc]=1;
		if(lc!=0){
			f[lc][i]=1;
			//
		}
		if(rc!=0){
			f[rc][i]=1;
			//
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(tree[j][i]){
				f[j][i]=quan[i];
				//
			}
			//
		}
		//
	}*/
	
	Floyd();//
	
	int mins=0x7fffffff;
	for(int i=1;i<=n;i++){
		int ttl=0;
		for(int j=1;j<=n;j++){
			ttl+=tree[i][j]*quan[j];
			//
		}
		mins=mins<ttl?mins:ttl;
		//
	}
	cout<<mins;
	return 0;
}
//ac
