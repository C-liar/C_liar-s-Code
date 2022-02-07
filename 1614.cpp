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
int n,m,a[3000];
int main(){
	//
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		//
	}
	int mina=2147000000;
	bool iszero=0,isall=0;
	if (m==0) iszero=1;
	if (n==m) isall=1;
	for(int i=0;i<n-m;i++){
		int cpp=0;
		for(int j=i;j<i+m;j++){
			cpp+=a[j];
			//
		}
		mina=mina<cpp?mina:cpp;
		//
	}
	if (iszero) {
		cout<<0; 
		return 0;
	}
	if (isall){
		int all=0;
		for(int i=0;i<n;i++){
			all+=a[i];
			//
		}
		cout<<all;
		return 0;
	}
	cout<<mina;
	
	return 0;
}
//ac
