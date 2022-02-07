#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
long a[101],in=0,num=0,t=1;
int main(){
	while (t==1){
		cin>>in;
		if (in==0) t=0;
		a[num++]=in;
	}
	for (int i=num-2;i>=0;i--) cout<<a[i]<<" ";
	return 0;
}
//there is no 0 inside
