#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int num[114514],n=0,i=0;

int main(){
	cin>>n;
	num[0]=n;
	while (n-1){
		if (n%2){
			i++;
			n=n*3+1;
			num[i]=n;
		}
		else {
			i++;
			n/=2;
			num[i]=n;
		}
	}
	for(int j=i;j>=0;j--){
		cout<<num[j]<<" ";
	}
	return 0;
}
