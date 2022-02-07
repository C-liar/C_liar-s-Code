#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int a ;
void mina(int a){
	if (a!=0) 
	{
		int m=0;
		m=a%10;
		cout<<m;
		mina(a/10);
	}
}
int main(){
	cin>>a;
	mina(a);
	return 0;
}
