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
int N,M,K;
struct Stu{
	int group;
	string name;
}a[20002];

int find_c(int c);

int name_to_group(string ac){
	for(int i=1;i<=N;i++){
		if(a[i].name==ac){
			return a[i].group;
			//
		}
	}
	return 0;
}

void group_AB(int stuA,int stuB){
	stuA=find_c(stuA);
	stuB=find_c(stuB);
	a[stuA].group=stuB;
}

int find_c(int c){
	while(a[c].group!=c){
		c=a[c].group;
		//
	}
	return c;
}

int main(){
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		getline(cin,a[i].name);
		a[i].group=i;
		//
	}
	for(int i=1;i<=M;i++){
		string A,B;
		cin>>A>>B;
		group_AB(name_to_group(A),name_to_group(B));
		//
	}
	
	int K=0;
	
	cin>>K;//<-???
	
	for(int i=1;i<=K;i++){
		string A,B;
		cin>>A>>B;
		if(find_c(name_to_group(A))==find_c(name_to_group(B))){
			cout<<"Yes."<<endl;
			//
		}
		else{
			printf("No.\n");
		}
		//
	}
	//
	return 0;
}
