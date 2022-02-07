#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int sum(int N) {
	if (N==1) return 1;
	return N+sum(N-1);
}

int main(){
	int N=0;
	cin>>N;
	cout<<sum(N);
	return 0;
}
