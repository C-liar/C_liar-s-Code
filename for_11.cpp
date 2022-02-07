#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{	int a=0,n=0,s=1;
	cin>>a>>n;
	while (n>=1){
		n--;
		s*=a;
	}
	cout<<s;
	return 0;
}//a^n
