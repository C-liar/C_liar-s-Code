#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int n=0,a[10][10],ac=1;

int main(){
	cin>>n;
/*	for(int y=1;y<=n;y++){
		for(int x=1;x<=n;x++,ac++){
			a[y][x]=ac;
		}
	}*/
	int y=1,x=1;
	while(ac<n*n){
		while((a[y][x+1]==0)&&(x<n)){//right
			a[y][x]=ac;
			ac++;
			//cout<<a[y][x];
			x++;
		}
		while((a[y+1][x]==0)&&(y<n)){//under
			a[y][x]=ac;
			ac++;
			//cout<<a[y][x];
			y++;
		}
		while((a[y][x-1]==0)&&(x>1)){//left
			a[y][x]=ac;
			ac++;
			//cout<<a[y][x];
			x--;
		}
		while((a[y-1][x]==0)&&(y>1)){//up
			a[y][x]=ac;
			ac++;
			//cout<<a[y][x];
			y--;
		}
	}
	a[y][x]=ac;
	for(int y=1;y<=n;y++){
		for(int x=1;x<=n;x++){
			cout<<setw(3)<<a[y][x];
		}
		cout<<'\n';
	}
	return 0;
}

/*
while((a[y][x]!=0)&&(x<n)){
	a[y][x]=ac;
	ac++;
	cout<<a[y][x];
	x++;
}*/
//ac!
