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
int n,i;
string word;
string password;

int main(){
	//
	cin>>n;
	//scanf("%s",password);
//	while(scanf("%c",&word[i++])!=EOF);
	cin>>word;
	for(int i=0;i<(int)(word.length());i++){
		password[i]=(word[i]+n-'a')%26+'a';
		//
	}
	for(int i=0;i<(int)(word.length());i++){
		//if(password[i]>='a'&&password[i]<='z'){
			cout<<password[i];
			//
		//}
		//
	}
	return 0;
}
//ac
