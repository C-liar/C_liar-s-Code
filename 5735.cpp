#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
double x[4],y[4],d[3],l;
double dis(double xn,double yn,double xn1,double yn1){
	return sqrt((xn-xn1)*(xn-xn1)+(yn-yn1)*(yn-yn1));
} 
int main(){
	cin>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
	d[0]=dis(x[1],y[1],x[2],y[2]);
	d[1]=dis(x[2],y[2],x[3],y[3]);
	d[2]=dis(x[3],y[3],x[1],y[1]);
	l=d[0]+d[1]+d[2];
	printf("%.2lf",l);
	return 0;
}
//ac
