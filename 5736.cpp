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
int n[100],num;

bool isprime(int ni){
	if (ni<2) return 0;
	else{
		for(int i=2;i*i<=ni;i++){
			if (ni%i==0) return 0;
			//
		}
		return 1;
	}
}

int main(){
	//
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>n[i];
		//
	}
	for(int i=0;i<num;i++){
		if (isprime(n[i])) cout<<n[i]<<" ";
		//
	}
	
	return 0;
}
//ac!!!
