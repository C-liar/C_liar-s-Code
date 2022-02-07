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
int father[5050];//
int n,m,p;
int findd(int c);

void unionn(int aa,int bb){
	aa=findd(aa);bb=findd(bb);
	father[aa]=bb;
}

int findd(int c){
	if(father[c]==c){
		return c;
		//
	}
	return father[c]=findd(father[c]);
}

int main(){
	//
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++){//chu'shi'hua
		father[i]=i;
		//
	}
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		unionn(a,b);
		//
	}
	for(int i=1;i<=p;i++){
		int a,b;
		cin>>a>>b;
		if(findd(a)==findd(b)){
			cout<<"Yes"<<endl;
			//
		}
		else if(findd(a)!=findd(b)){
			cout<<"No"<<endl;
			//
		}
		//
	}
	
	return 0;
}

//ac!!!
