#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){	
	int a=0,t=0;
	cin>>a;
	while (a!=1)
	{
		a=a/2;
		t++;
	}
	cout<<t+1;
	return 0;
}
