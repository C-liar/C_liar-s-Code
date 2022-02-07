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
int a[510],b[510],c[510];
string a_,b_;

int main(){
	//
	cin>>a_>>b_;
	a[0]=a_.length();b[0]=b_.length();
	//cout<<a[0]<<b[0]<<endl;
	for(int i=1;i<=a[0];i++){
		a[i]=a_[a[0]-i]-'0';
		//b[i]=b_[b[0]-i]-'0';
		//cout<<a[i]<<b[i]<<endl;
	}
	for(int i=1;i<=b[0];i++){
		b[i]=b_[b[0]-i]-'0';
		//cout<<b[i]<<endl<<endl;
		//
	}
	int clen=0;
	for(int i=1;(i<=a[0])||(i<=b[0]);i++){
		/*if(a[i]+b[i]+c[i]>=10){
			c[i]+=(a[i]+b[i])%10;
			c[i+1]++;
			clen++;
			//cout<<clen<<" "<<c[i]<<" "<<a[i]<<" "<<b[i]<<endl;
			//
		}
		else{
			c[i]+=a[i]+b[i];
			clen++;
			//cout<<clen<<" "<<c[i]<<" "<<a[i]<<" "<<b[i]<<endl;
		}*/
		//
		c[i]=a[i]+b[i];
		clen++;
	}
	for(int i=1;i<=clen;i++){
		if(c[i]>=10){
			c[i+1]++;
			c[i]%=10;
			//
		}
		//
	}
	
	//cout<<clen<<" "<<endl;
	if(c[clen+1]){
		clen++;
		//cout<<clen;
		//
	}
	for(int i=clen;i>=1;i--){
		cout<<c[i];
		//
	}
	
	return 0;
}//ac
