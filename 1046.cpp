#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int ap[10],l=0,ans=0;
int main(){
	for(int i=0;i<10;i++){
		cin>>ap[i];
	}
	cin>>l;
	l+=30;
	for(int i=0;i<10;i++){
		if (ap[i]<=l){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
//ac
