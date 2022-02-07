#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
	int n=0,a=1,N;
	cin>>n;
	N=n;
	for(int i=1;i<=n;i++){//
		
		for(int j=1;j<=N;j++){
			
			printf("%02d",a);
			a++;
		}
		cout<<"\n";
		N--;
		
	}
	return 0;
}
//ac
