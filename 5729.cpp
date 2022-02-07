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
//const int maxa=20;
struct cub{
	int x,y,z;
};
int q,w,x,h;
bool cube[21][21][21];

int main(){
	//
	cin>>w>>x>>h;
	cin>>q;
	while(q){
		//
		cub a,b;
		cin>>a.x>>a.y>>a.z>>b.x>>b.y>>b.z;
		for(int i=a.x;i<=b.x;i++){
			for(int j=a.y;j<=b.y;j++){
				for(int k=a.z;k<=b.z;k++){
					cube[i][j][k]=1;
					//
				}
				//
			}
			//
		}
		//meiciqiege
		//
		q--;//chongfu
	}
	int ans=0;
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				if (cube[i][j][k]==0){
					ans++;
				}
				//
			}
			//
		}
		//
	}
	cout<<ans;
	return 0;
}
//ac!!!
