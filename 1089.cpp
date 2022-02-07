#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
const int mp=300;
int main()
{	int mon=1,s=0,out=0,cun=0,d=0,b=0;
	for(mon=1;mon<=12;mon++){
		s+=mp;
		cin>>out;
		if (out>s&&b==0){
			d=-mon;
			s=0;
			cun+=0;
			b=1;
		}
		else
		{
			s-=out;
			cun+=s/100;
			s%=100;
		}
	}
	if (d==0) cout<<s+cun*120;
	else cout<<d;

	return 0;
}
