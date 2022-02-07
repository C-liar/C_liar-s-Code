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
double len,bu=2;
int ans;

int main(){
	//
	cin>>len;
	double all;
	while(all<len){
		all+=bu;
		bu=bu*0.98;
		ans++;
		//
	}
	cout<<ans;
	return 0;
}
//ac
