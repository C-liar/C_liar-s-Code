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
int q;
string s;

int main(){
	//
	cin>>q;
	cin>>s;
	while(q){
		int a=0;
		cin>>a;
		if(a==1){
			string str;
			cin>>str;
			s=s+str;
			cout<<s<<endl;
			//
		}
		else if(a==2){
			int aa,bb;
			cin>>aa>>bb;
			string ss={};
			for(int i=aa;i<aa+bb;i++){
				ss+=s[i];
				//
			}
			s=ss;
			cout<<s<<endl;
			//
		}
		else if(a==3){
			int aa;
			cin>>aa;
			string ss,sss={};
			cin>>ss;
			for(int i=0;i<aa;i++){
				sss+=s[i];
				//
			}
			for(int i=0;i<(int)(ss.length());i++){
				sss+=ss[i];
				//
			}
			for(int i=aa;i<(int)(s.length());i++){
				sss+=s[i];
				//
			}
			s=sss;
			cout<<s<<endl;
		}
		else if(a==4){
			string ss;
			cin>>ss;int findd=0;
			for(int i=0;i<(int)(s.length());i++){
				if(s[i]==ss[0]){
					bool istotal=1;
					for(int j=0;j<(int)(ss.length());j++){
						int ii=i;
						if(s[ii+j]!=ss[j]){
							istotal=0;
							
							//
						}
						//
					}
					if(istotal){
						cout<< i<<endl;findd=1;
						break;
						//
					}
					//
				}
				//
			}
			if(!findd){
				cout<<-1<<endl;
				//
			}
			//
		}
		//
		q--;
	}
	return 0;
}
