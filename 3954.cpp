#include<bits/stdc++.h>

using namespace std;
double a,b,c;
double total;

int main(){
	cin>>a>>b>>c;
	total=(double)(a)*20/100+(double)(b)*30/100+(double)(c)*50/100;
	//printf("%ld",total);
	cout<<int(total);
	return 0;
}
