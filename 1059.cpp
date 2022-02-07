#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;

int n,a[120],ac=0,b[100],fg=0;
bool flag=1;
void swp(int &a,int &b){
	int tem=a;a=b;b=tem;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}//shuru
	for(int i=0;i<n;i++){
		//a[i]
		for(int j=0;j<n;j++){
			//b[j]
			if (a[i]==b[j]){
				flag=0;
				break;
			}
		}
		if (flag==1){
			b[fg]=a[i];
			fg++;
		}
		else flag=1;
	}//chachong
	for(int j=0;j<fg;j++){
		for(int i=1;i<fg;i++){
			//b[i]
			if (b[i-1]>b[i]){
				swp(b[i-1],b[i]);
			}
		}
	}//paixu
	cout<<fg<<"\n";
	for(int i=0;i<fg;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
//ac
