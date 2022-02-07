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
string l,ddd={'.','.','.','.'};
int boy,girl;

int main(){
	//
	cin>>l;
	l+=ddd;
	for(int i=0;i<(int)(l.length());i++){
		if(l[i]!='.'){
			if(l[i]=='b'){
				if(l[i+1]=='o'){
					if(l[i+2]=='y'){
						boy++;
						i+=2;
						//
					}
					//
					else{
						boy++;
						i++;
					}
				}
				//
				else{
					boy++;
				}
			}
			//
			else if(l[i]=='o'){
				if(l[i+1]=='y'){
					boy++;
					i++;
					//
				}
				//
				else{
					boy++;
				}
			}
			else if(l[i]=='y'){
				boy++;
				//
			}
			else if(l[i]=='g'){
				if(l[i+1]=='i'){
					if(l[i+2]=='r'){
						if(l[i+3]=='l'){
							girl++;
							i+=3;
							//
						}
						//
						else{
							girl++;
							i+=2;
						}
					}
					//
					else{
						girl++;
						i+=1;
					} 
				}
				//
				else{
					girl++;
				}
			}
			else if(l[i]=='i'){
				if(l[i+1]=='r'){
					if(l[i+2]=='l'){
						girl++;
						i+=2;
						//
					}
					//
					else{
						girl++;
						i++;
					}
				}
				//
				else{
					girl++;
				}
			}
			else if(l[i]=='r'){
				if(l[i+1]=='l'){
					girl++;
					i++;
					//
				}
				//
				else{
					girl++;
				}
			}
			else if(l[i]=='l'){
				girl++;
				//
			}
		}
		//
	}
	cout<<boy<<endl<<girl;
	return 0;
}
//you4chou4you4chang2,dan4neng2guo4jiu4xing2
//ac
