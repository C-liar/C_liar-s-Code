#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
#include<stack>
using namespace std;

stack <char> s;
string a;
int main(){
	cin>>a;
	for(int i=0;i<(int)(a.length())-1;i++){
		
		if (a[i]=='('){
			s.push('(');
		}
		else if (a[i]==')'){
			if (s.empty()){
				cout<<"NO";
				return 0;
			}
			else{
				s.pop();
			}
		}
	}
	if (s.empty()) {
	   cout<<"YES";
	    return 0;
	}else{
		cout<<"NO";
		return 0;
	}
	return 0;
}
//ac
