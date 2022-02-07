#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{	
	int a=1,b=0,s=1;
	cin>>a>>b;
	for(int i=1;i<=b;i++){
		s*=a;
		s=s%1000;
		
	}
	cout<<s;
	return 0;
}
