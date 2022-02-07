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
int n,a[10000];

int main(){
	//
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		//
	}
	int ans=0;
	for(int i=0;i<n;i++){
		//a[i]
		int ann=1;
		//int numnow=a[i];
		for(int j=i+1;;j++){
			if (a[j]==a[i]+1){
				i++;
				ann++;
			}
			else {
				break;
			}
			//
		}
		ans=ans>ann?ans:ann;
		//
	}
	cout<<ans;
	return 0;
}
//ac
