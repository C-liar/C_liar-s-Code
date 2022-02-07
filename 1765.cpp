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

//int ii=0;
int main(){
	string word;
	//while(scanf("%c",|word[ii])!=EOF){
		//cout<<1;
		//scanf("%s",word);
	//	ii++;
		//
	//}
	//gets(word);
	getline(cin,word);
	
	int times=0;
	for(int i=0;i<(int)(word.length());i++){
		if(word[i]=='a'||word[i]=='d'||word[i]=='g'||word[i]=='j'||word[i]=='m'||word[i]=='p'||word[i]=='t'||word[i]=='w'||word[i]==' '){
			times++;
			//cout<<endl;
			//
		}
		else if(word[i]=='b'||word[i]=='e'||word[i]=='h'||word[i]=='k'||word[i]=='n'||word[i]=='q'||word[i]=='u'||word[i]=='x'){
			times+=2;
			//
		}
		else if(word[i]=='c'||word[i]=='f'||word[i]=='i'||word[i]=='l'||word[i]=='o'||word[i]=='r'||word[i]=='v'||word[i]=='y'){
			times+=3;
			//
		}
		else if(word[i]=='s'||word[i]=='z'){
			times+=4;
			//
		}
		//cout<<1;
		//
	}
	cout<<times;
	
	return 0;
}
//ac
