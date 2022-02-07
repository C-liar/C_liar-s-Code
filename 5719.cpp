#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){
	int n=0,k=0;
	int s1=0,s2=0;//I class
	int t1=0,t2=0;//II class
	double a1=0,a2=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if (i%k==0) { //I
			s1+=i;
			t1++;
		}
		else if (i%k!=0) { //II
			s2+=i;
			t2++;
		}
	}
	a1=s1*1.0/t1;a2=s2*1.0/t2;
	printf("%.1lf %.1lf",a1,a2);
	return 0;
}
