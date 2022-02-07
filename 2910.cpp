#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
#include<algorithm>
using namespace std;
//
int D[101][101];//i->j
int N,M,a[10001];//ai,lu'jing

void Floyed(){
	//O(N^3),maybe TLE,but it's VERY EASY.
	for(int k=1;k<=N;k++){//
		for(int j=1;j<=N;j++){//
			for(int i=1;i<=N;i++){//
				if(D[j][i]>D[k][i]+D[j][k]){
					D[j][i]=D[k][i]+D[j][k];
					//
				}
				//
			}
			//
		}
		//
	}
}

int main(){
	//
	cin>>N>>M;
	for(int i=1;i<=M;i++){
		cin>>a[i];
		//
	}
	for(int i=1;i<=N;i++){
		//N'hao'dao'dao'qi'ta'dao
		for(int ii=1;ii<=N;ii++){
			//i'dao'dao'di'ii'ge'dao
			cin>>D[ii][i];
			//
		}
		//
	}
	
	Floyed();
	//shi'yong'f'suan'fa'
	//xun'zhao'zui'duan'lu'jing'
	
	//zui'duan'lu'jing'=ans
	//    |
	//   \ /
	//    V
	int minu=0,kkk=1;//start
	for(int i=1;i<=M;i++){
		minu+=D[a[i]][kkk];
		kkk=a[i];
		//
	}
	
	cout<<minu;
	return 0;
}
//ac!!!
