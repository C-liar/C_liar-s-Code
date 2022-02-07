#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
using namespace std;

const int INF=2147483647;
//
/**/
int n;//n=1_
struct tree{//tree=4_
	int num,nlz;//,_____,______;
	//bianhao=2_,nenglizhi=3_,lchild=5_,rchild=6_
}a[(1<<8)-1];//shuzu=7_

int main(){
	//
	cin>>n;
	for(int i=0;i<(1<<n);i++){
		cin>>a[i].nlz;
		a[i].num=i+1;
		//
	}
	tree maxl;
	maxl.nlz=-INF;maxl.num=2;
	for(int i=1;i<=(1<<(n-1));i++){
		maxl=maxl.nlz>a[i-1].nlz?maxl:a[i-1];
		//
	}
	tree maxr;
	maxr.nlz=-INF;maxr.num=2;
	for(int i=(1<<(n-1))+1;i<(1<<n);i++){
		maxr=maxr.nlz>a[i-1].nlz?maxr:a[i-1];
		//
	}
	if(maxl.nlz>maxr.nlz){
		cout<<maxr.num;
		//
	}
	else{
		cout<<maxl.num;
	}
	return 0;
}
