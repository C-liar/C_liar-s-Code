#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int fac(int x){
	if (x==0) return 1;
	else return x*fac(x-1);
}
int main(){
	int x=10;
	cout<<fac(x);
	return 0;
}
