#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
bool tr[10003];
int l,m,u,v;
int main(){
	cin>>l>>m;
	l++;//tree num
	while(m){
		m--;
		cin>>u>>v;
		for(int i=u;i<=v;i++){
			tr[i]=1;
		}
	}
	int a=0;
	for(int i=0;i<l;i++){
		if (tr[i]==0){
			a++;	
		}//cout<<tr[i];
	}
	cout<<a;
	return 0;
}
//ac
