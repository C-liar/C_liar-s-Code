#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int x,n,sum,tim;
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int ss=i;
		
		while(ss){
			
			int gws=ss%10;
		
			if (gws==x) tim++;	ss/=10;
		}
	}
	cout<<tim;
}
//ac
