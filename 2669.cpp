#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
	int k=0,n=0, mod =-1;
	cin>>k;
	while(k>n){
		n++;
		k-=n;
	}
	mod=k;k=0;
	for(int i=1;i<=n;i++){
		k+=i*i;
	}
	k+=mod*(n+1);
	cout<<k;
	return 0;
}
