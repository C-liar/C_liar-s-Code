#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
using namespace std;
//
//stack <int> s;
int s[1000],top=0;
string a;

int main(){
	//
	cin>>a;
	for(int i=0;i<(int)(a.length())-1;i++){
		if (a[i]<'0'){
			switch (a[i]) {
				case '/':
					top--;
					s[top-1]/=s[top];
					break;
				case '*':
					top--;
					s[top-1]*=s[top];
					break;
				case '-':
					top--;
					s[top-1]-=s[top];
					break;
				case '+':
					top--;
					s[top-1]+=s[top];
					break;
				default:
					//
					break;
			}
			//cout<<s[top]<<s[top-1]<<top<<endl;
		}
		else {
			int sum=0;
			while (a[i]>='0'){
				sum=sum*10+a[i]-'0';
				i++;
				//cout<<i<<a[i]<<sum<<endl;
			}
			i--;
			s[top]=sum;
			top++;
			//cout<<top<<s[top]<<endl;
		}
		//cout<<i<<s[top]<<endl;
	}
	cout<<s[top-1];
	return 0;
}
/**/
//ac
