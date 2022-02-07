#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int zb[1024][1024];//zuobi
int n,a;
bool issm(int x,int y,int n){//is shemian
	if (n==0) return 1;
	n--;
	if ((x<1<<n)&&(y<1<<n)) return 0;
	else if ((x<1<<n)&&(y>=1<<n))return issm(x,y-(1<<n),n);
	else if ((x>=1<<n)&&(y<1<<n))return issm(x-(1<<n),y,n);
	else return issm(x-(1<<n),y-(1<<n),n);
}
int main(){
	cin>>n;
	a=1<<n;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if (issm(j,i,n)) zb[i][j]=1;
			printf("%d",zb[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
//aaaac
