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
//
struct tree{
	long lc,rc;
	bool trn;
}fbt[(1<<21)];
struct ball{
	long point;
	int num=1;
};

int d,a;

bool isleaf(long dot){
	if (dot>=(1<<(d-1))) return 1;
	else return 0;
}

int main(){
	//
	cin>>d>>a;
	for(long i=1;i<=a;i++){
		fbt[i].lc=2*i;fbt[i].rc=2*i+1;
		//
	}
	while(){
		
		//
	}
	for(int i=1;i<=a;i++){
		if(fbt[i].trn){
			fbt[i].trn=0;
			//
		}
		else{
			fbt[i].trn=1;
		}
		//
	}
	
	return 0;
}
//weiwancheng 
