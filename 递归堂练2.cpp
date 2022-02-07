#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int fib(int n){
	if (n==0) return 0;
	else if (n==1) return 1;
	return fib(n-1)+fib(n-2);
} 

int main(){
	int n=0;
	cin>>n;
	cout<<fib(n);
	return 0;
}
