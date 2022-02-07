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
long long int M,N,num[10]={0};

void number(long long int anumber){
	if (anumber){
		int anum=0;
		anum=anumber%10;
		num[anum]++;
		anumber/=10;
		number(anumber);
	}
}

int main(){
	//
	cin>>M>>N;
	for(long long int i=M;i<=N;i++){
		number(i);
		//
	}
	for(long long int i=0;i<10;i++){
		cout<<num[i]<<" ";
		//
	}
	return 0;
}
//ac!!!
