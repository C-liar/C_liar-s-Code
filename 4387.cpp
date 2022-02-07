#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
using namespace std;
//
const int num=100000;
int q,n;
int s[num],top=0;
bool error=0;

//stack <int> s;
void push(int ai){
	if (top>=num){
		error=1;
	}
	else {
		s[top]=ai;
		top++;
	}
}
void pop(int ai){
	if (top<=0){
		error=1; 
		//
	}
	else{
		//
		if (s[top-1]==ai){
		   top--;
		   s[top]=0;
		}
		else if(s[top-1]!=ai){
			error=1;
		}
	}
}

int main(){
	cin>>q;
	while(q){
		//every==
		cin>>n;
		int ain[num],aout[num];
		for(int i=0;i<n;i++){
			//
			cin>>ain[i];
			//ain[i]=i;
		}
		for(int i=0;i<n;i++){
			cin>>aout[i];
			//
		}
		//int ii=0;
		//for(int i=0;i<n;i++){
		
		int aaa=0;
		push(ain[aaa]);
		while(aout[aaa]!=s[top-1]){
			
		}

		//every==
		//reset data;
		error=0;
		memset(s,0,num*4);
		top=0;
		q--;
	}
	//
	return 0;
}

