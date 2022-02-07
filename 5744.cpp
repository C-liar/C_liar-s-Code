#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
struct xy{
	string nm;
	int ag,NOIP;
} a[10000];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].nm>>a[i].ag>>a[i].NOIP;
		
	}
	for(int i=0;i<n;i++){
		if (a[i].NOIP*1.2001<=600) cout<<a[i].nm<<" "<<a[i].ag+1<<" "<<(int)(a[i].NOIP*1.2001)<<endl;
		else cout<<a[i].nm<<" "<<a[i].ag+1<<" "<<600<<endl;
	}
	return 0;
}
//aaac
