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
//int n,m;
int father[1001];

int find_father(int a){
	while(father[a]!=a){
		a=father[a];
		//
	}
	return a;
}

void connect(int a,int b){
	a=find_father(a);
	b=find_father(b);
	father[a]=b;
}

int main(){
	//
	while(1){
		int n=0,m=0,ans=-1;
		cin>>n;
		if(n==0){
			break;
			//
		}
		cin>>m;
		for(int i=1;i<=n;i++){
			father[i]=i;
			//
		}
		for(int i=1;i<=m;i++){
			int a=0,b=0;
			cin>>a>>b;
			connect(a,b);
			//
		}
		for(int i=1;i<=n;i++){
			if(father[i]==i){
				ans++;
				//
			}
			//
		}
		//
		cout<<ans<<endl;
	}
	//
	return 0;
}
//ac
