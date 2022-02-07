#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int N;
struct stu{
	int yw,sx,yy,tt;
} a[1001];
int tttt;
int main(){
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>a[i].yw>>a[i].sx>>a[i].yy;
		a[i].tt=a[i].yw+a[i].sx+a[i].yy;
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if (i!=j&&(abs(a[i].yw-a[j].yw)<=5)&&(abs(a[i].sx-a[j].sx)<=5)&&(abs(a[i].yy-a[j].yy)<=5)&&(abs(a[i].tt-a[j].tt)<=10)){
				tttt++;
			}
		}
	}
	cout<<tttt/2;
	return 0;
}
