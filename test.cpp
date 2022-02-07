#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h> 
#include<iomanip>

using namespace std;
const double PI=3.14;
int main(){
	int n=0,min=1001,a=0;
	
	cin>>n;
	while (n!=0){
		cin>>a;
		min=a<min?a:min;
		n--;
	}
	cout<<min;
/*	int a=0,b=0,c=0,d=0;
	cout<<setw(2)<<a<<b<<a<<a;
	
	double v=0,r=0;
	scanf("%lf",&r);
	v=4.0/3*PI*r*r*r;
	printf("%.2lf",v);*/
	return 0;
}
