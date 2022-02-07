#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
string nm[1000];
int yw[1000],sx[1000],yy[1000],sm[1000];

int main(){
	int N=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>nm[i]>>yw[i]>>sx[i]>>yy[i];
	}
	int max=-1,imax=-1;
	
	for(int i=0;i<N;i++){
		
		sm[i]=yw[i]+sx[i]+yy[i];
		if (sm[i]>max){
			max=sm[i];
			imax=i;
		}
	}
	cout<<nm[imax]<<" "<<yw[imax]<<" "<<sx[imax]<<" "<<yy[imax];
	return 0;
}
//ac
