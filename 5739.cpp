#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
long n;
long f(long n){
	if (n==0) return 1;
	return n*f(n-1);
}
int main(){
	cin>>n;
	cout<<f(n);
	return 0;
}
//ac
