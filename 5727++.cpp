//wrong
#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int a=0,num[114514191],n,i=0;
int main(){
	cin>>a;
	
	for(int i=1;i<=a;i++){
		n=i;
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
		cout<<'\n';
	}
	return 0;
}
