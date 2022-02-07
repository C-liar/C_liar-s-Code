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
#define aa 5050
//aa:maxium of m;
using namespace std;
//
int mina[aa],w[aa][aa],n,m;
//w:weight of i to j;min:weight of tree;
//n:amount of point;m:amount of weight;
bool is_white[20010];
//is_white:obviously
int mst;
//bool is_lian[]

int main(){
	//initialization;chu'shi'hua
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			w[i][j]=0x7ffffff;
			//
		}
		//i to j:inf
	}
	for(int i=1;i<=n;i++){
		w[i][i]=0;
		//
	}
	{
	for(int i=1;i<=m;i++){
		int x=0,y=0,z=0;
		cin>>x>>y>>z;
		/*w[x][y]=z;w[y][x]=z;*/
		//          ^ wa
		w[x][y]=w[x][y]>z?z:w[x][y];
		w[y][x]=w[y][x]>z?z:w[y][x];
		//cin i to j
	}
	//debug chuck
	}
	
	/*
	if(n>m+1){
		cout<<"orz";
		return 0;
		//
	}
	*///this is wrong in #13
	
	memset(mina,0x7f,sizeof(mina));
	mina[1]=0;//start point:1
	//next is Prim
	for(int i=1;i<=n;i++){
		int minp;//the "min weight" point
		{//find the minimum blue point
		int k=0;
		//?:why k=0
		//oh,I know,mina[k] is inf
		for(int j=1;j<=n;j++){
			if(!is_white[j]&&mina[j]<mina[k]){
				k=j;
				//
			}
			//
		}
		minp=k;
		//
		}
		is_white[minp]=1;
		mst+=mina[minp];
		for(int j=1;j<=n;j++){
			if(!is_white[j]&&(w[minp][j]<mina[j])){
				mina[j]=w[minp][j];
				//
			}
			//
		}
	}
	if(mst>=134217727){//#13  <(-L_-)>
		cout<<"orz";
		return 0;
		//
	}
	cout<<mst;
	return 0;
}
//ac!!! \(^A^)/
