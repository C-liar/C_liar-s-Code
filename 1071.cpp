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
/*struct word{
	char odw,psw;
}password[27];*/
char password[27]={'\0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},ordnary[27];
string ordword,pasword,mima,mingwen;
int a;

/*
cout<<"Failed";
return 0;
*/

int main(){
	//
	cin>>pasword>>ordword>>mima;
	/*if(ordword.length()!=pasword.length()){
		cout<<"Failed";
		return 0;
		//
	}*/
	for(int i=0;i<(int)(ordword.length());i++){
		for(int j=0;j<(int)(ordword.length());j++){
			if(ordword[i]==ordword[j]&&pasword[i]!=pasword[j]){
				//cout<<pasword<<ordword<<endl;
				cout<<"Failed";
				return 0;
				//
			}
			//
		}
		//
	}
	//cout<<(int)(ordword.length());
	for(int i=0;i<(int)(ordword.length());i++){
		bool isall=0;
		for(int j=1;j<=26;j++){
			if(ordword[i]==password[j]){
				isall=1;
				//
			}
			//
		}
		if(!isall){
			cout<<"Failed";
			return 0;
			//
		}
		//
	}
	for(int j=0;j<(int)(mima.length());j++){
		//
		//cout<<pasword<<" "<<ordword<<endl;
		bool isin=0;
		for(int i=0;i<(int)(pasword.length());i++){
			if(mima[j]==pasword[i]){
				cout<<a++;
				isin=1;
				//
			}
			//
		}
		if(!isin){
			cout<<"Failed";
			//cout<<pasword<<ordword<<endl;
			return 0;
			//
		}
		//	
	}
	//
	for(int i=0;i<(int)(ordword.length());i++){
		for(int j=1;j<=26;j++){
			if(password[j]==pasword[i]){
				ordnary[i]=ordword[j];
				//
			}
			//
		}
		//
	}
	for(int i=1;i<=26;i++){
		for(int j=0;j<=(int)(mima.length());j++){
			if(mima[j]==password[i]){
				mingwen[j]=ordnary[i];
				//
			}
			//
		}
		//
	}
	for(int i=0;i<(int)(mima.length());i++){
		cout<<mingwen[i];
		//
	}
	
	return 0;
}
