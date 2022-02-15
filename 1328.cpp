#include<bits/stdc++.h>

using namespace std;
//
int N,NA,NB;
int a[210],b[210];
int pa,pb;
int point[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
//a->b
void go(int a,int b){
	pa+=point[a][b];
	pb+=point[a][b];
}
int main(){
	//
	cin>>N>>NA>>NB;
	for(int i=1;i<=NA;i++){
		cin>>a[i];
	}
	for(int i=1;i<=NB;i++){
		cin>>b[i];
	}
	int ia=0,ib=0;
	while(N){
		if(ia==NA){
			ia=0;
		}
		if(ib==NB){
			ib=0;
		}
		ia++;
		ib++;
		//go(a[ia],b[ib]);
		if(point[a[ia]][b[ib]]){
			pa++;
		}
		if(point[b[ib]][a[ia]]){
			pb++;
		}
		N--;
	}
	cout<<pa<<' '<<pb;
	return 0;
}
//ac
