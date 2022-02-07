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
string s;

int main(){
	//
	getline(cin,s);
	for(int i=0;i<(int)(s.length());i++){
		if(s[i]>='a'&&s[i]<='z'){
			char a=s[i]-'a'+'A';
			cout<<a;
			continue;
			//
		}
		cout<<s[i];
		//
	}
	return 0;
}
//ac
