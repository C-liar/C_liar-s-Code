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
long N;

int main(){
	//
	cin>>N;
	if(N){
		if(N>0){
			bool ishigh=1;
			while(N){
				int mod=0;
				mod=N%10;
				if(!mod&&ishigh){
					//
				}
				else{
					ishigh=0;
					cout<<mod;
				}
				//
				N/=10;
			}
		}
		else if(N<0){
			N=-N;
			cout<<"-";
			bool ishigh=1;
				while(N){
					int mod=0;
					mod=N%10;
					if(!mod&&ishigh){
						//
					}
					else{
						ishigh=0;
						cout<<mod;
					}
					//
					N/=10;
				}
			//
		}
	}
	else{cout<<0;}
	return 0;
}
/*

bool ishigh=1;
	while(N){
		int mod=0;
		mod=N%10;
		if(!mod&&ishigh){
			//
		}
		else{
			ishigh=0;
		cout<<mod;
		}
		//
		N/=10;
	}

*/
//ac
