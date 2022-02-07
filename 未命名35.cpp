#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>
using namespace std;
//
queue <int> nc;
int qnc[100];
int M,N;
int atc[1000];

int main(){
	//
	cin>>M>>N;
	//   nc atc
	for(int i=0;i<N;i++){
		cin>>atc[i];
	}
	for(int i=0;i<N;i++){
		for(int qu=0;qu<M;qu++){
			if(((int)(nc.size())<=3)&&(atc[i]!=qnc[qu])){
			 	//
 				nc.push(atc[i]);
	 		}
			//
		}
		
		
		
	}
	return 0;
}
