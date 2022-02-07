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
int L,sum,num;

int main(){
	//
	cin>>L;
	for(int i=2;sum+i<=L;i++){
		int isp=1;
		for(int j=2;j*j<=i;j++){
			if (!(i%j)){
				isp=0;
				break;
			}
			//
		}
		if(isp){
			sum+=i;num++;
			cout<<i<<endl;
			//
		}
		//
	}
	cout<<num<<endl;
	return 0;
}
//ac
