#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
using namespace std;
//
int n,m,ranka[100][20],stu[100];

int main(){
	//
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ranka[i][j];
			//
		}
		for(int j=0;j<m;j++){
			stu[i]+=ranka[i][j];
			//
		}
		//
	}
	for(int i=0;i<n;i++){
		int maxs=-1,mins=100;
		for(int j=0;j<m;j++){
			maxs=maxs>ranka[i][j]?maxs:ranka[i][j];
			mins=mins<ranka[i][j]?mins:ranka[i][j];
			//
		}
		stu[i]-=maxs+mins;
		//
	}
	double sc[n],ans=-1.00;
	for(int i=0;i<n;i++){
		sc[i]=(double)(stu[i])/(double)(m-2);
		ans=ans>sc[i]?ans:sc[i];
		//
	}
	printf("%.2lf",ans);
	
	return 0;
}
//ac
