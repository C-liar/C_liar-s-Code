#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int n=0,num[100],t[100],p1=0,p2=0,sum=0,tt=0,flag=0;
int ans=0;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for (p1=0;p1<n;p1++){
		for(p2=p1+1;p2<n;p2++){
			for(sum=0;sum<n;sum++){
				if (num[p1]+num[p2]==num[sum]){
					int flag=0;
					for (int j=0;j<=tt;j++){
						if (num[sum]==t[j]){
							flag=1;
							break;
						}
					}
					if (flag==0) {
						t[tt++]=num[sum];
						ans+=1;
					}
				}
			}
		}
	}
/*	while (q==0){
		for (int j=0;j<100;j++){
 			if (t[j]!=p[a])
	 		{
				p[a]=t[j];
				q=0;
			}
		}
		a++;
	}*/
	cout<<ans;
	return 0;
}
//ac
