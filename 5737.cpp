#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int yr[3000],x,y,tt;
int main(){
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if ((i%4==0)&&(i!=1700)&&(i!=1800)&&(i!=1900)&&(i!=2100)&&(i!=2200)&&(i!=2300)&&(i!=2500)&&(i!=2600)&&(i!=2700)&&(i!=2900)&&(i!=3000)){
			yr[tt++]=i;
		}
	}
	cout<<tt<<endl;
	for(int i=0;i<tt;i++){
		cout<<yr[i]<<" ";
	}
	return 0;
}
