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
int huanfang[40][40],N;

int main(){
	//
	cin>>N;
	int x=1,y=(N+1)/2;//x is line y is 
	huanfang[x][y]=1;
	for(int K=2;K<=N*N;K++){
		if((x==1)&&(y!=N)){
			huanfang[N][y+1]=K;
			x=N;y++;
			//
		} 
		else if((y==N)&&(x!=1)){
			huanfang[x-1][1]=K;
			x--;y=1;
			//
		}
		else if((y==N)&&(x==1)){
			huanfang[2][N]=K;
			x=2;y=N;
			//
		}
		else if((x!=1)&&(y!=N)){
			if(!huanfang[x-1][y+1]){
				huanfang[x-1][y+1]=K;
				x--;y++;
				//
			}
			//
			else{
				huanfang[x+1][y]=K;
				x++;
				//
			}
		}
	}
	//
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			printf("%d ",huanfang[i][j]);
			//
		}
		printf("\n");
		//
	}
	return 0;
}
//ac!!!
