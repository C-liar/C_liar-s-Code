#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{	int k=0,n=1;
	double i=0;
	cin>>k;
	while(i<=k){
		i+=1.0/n;
		n++;
	}
	cout<<n-1;
	return 0;
}
