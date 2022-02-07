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
int g[101][101];int minn[101];//weight
bool u[101];//false->blue,true->white;
int n,i,j,mst;

void Prim(){
	for(int i=1;i<=n;i++){
		int minna=0;
		for(int j=1;j<=n;j++){
			if(!u[j]&&(minn[j]<minn[minna])){
				//minna=minna<minn[j]?minna:minn[j];
				//
				minna=j;
			}
			//
		}
		u[minna]=1;
		mst+=minn[minna];
		for(int i=1;i<=n;i++){
			if(!u[i]&&g[minna][i]<minn[i]){
				minn[i]=g[minna][i];
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
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>g[i][j];
			//
		}
		//
	}
	memset(minn,0x7f,sizeof(minn));
	minn[1]=0;
	Prim();
	cout<<mst;
	return 0;
}
