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
int n,a,mina=2000,maxa=-1;

int main(){
	//
	cin>>n;
	while(n){
		cin>>a;
		mina=mina<a?mina:a;
		maxa=maxa>a?maxa:a;
		//
		n--;
	}
	cout<<maxa-mina;
	return 0;
}
//ac
