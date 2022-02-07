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
//queue <int> neicun;
int M,N;
int atc[1001];
int nc[101],k;
int ans;

void bubaoncdekpp(){
	if (k==M-1) k=0;
	else k++;
}

int main(){
	//
	cin>>M>>N;
	memset(nc,-1,101*4);
	for(int i=1;i<=N;i++){
		cin>>atc[i];
		int fg=0;
		for(int j=0;j<=M;j++){
			if (atc[i]==nc[j]) fg=1;
		}
		if (fg==1) continue;//chadaole
		else if(fg==0){
			//weichadao
			//neicun.push(atc[i]);
			nc[k]=atc[i];
			bubaoncdekpp();
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
//aaaaaaaaaaaaaaaaaaaaaaac!!!
//guo ran shi shui ti,lianduiliedoumeiyouyong,
//xunhuanshuzudanguo...
