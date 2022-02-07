#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{	int wk=1,sd=0,in=0,max=0,maxw=0,i=0;
	for(wk=1;wk<=7;wk++){
		sd=0;
		cin>>in;
		sd+=in;
		cin>>in;
		sd+=in;
		if (sd>8){
			if (max<sd){
				max=sd;
				maxw=wk;
				i=1;
			}	
		}
	}
	if (!i) cout<<i;
	else cout<<maxw;
	return 0;
}
