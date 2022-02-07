#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
#include<algorithm>
using namespace std;
//
priority_queue<int,vector<int>,greater<int> >q;
int n,op,data[1000001],adata;

int main(){
	//
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[adata];
		adata++;
		if(data[adata-1]==1){
			cin>>data[adata++];
			//
		}
	}
	for(int i=0;i<adata;i++){
		if(data[i]==1){
			i++;
			op=1;
			//
		}
		else if(data[i]==2){
			op=2;
			//
		}else if(data[i]==3){
			op=3;
			//
		}
		
		if(op==1){
			q.push(data[i]);
			
			//
		}
		else if(op==2){
			cout<<q.top()<<endl;
			q.pop();
			//
		}
		else{
			q.pop();
		}
		//
	}
	
	return 0;
}
