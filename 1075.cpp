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
int n,p;
int lp;

int main(){
	//
	cin>>n;
	for(int i=2;i*i<=n;i++){
		if (n%i==0) {
			lp=i;
			break;
		}
		//
	}
	cout<<n/lp;
	return 0;
}
//ac!!!
