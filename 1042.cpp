#include<bits/stdc++.h>
#define aa 62550
using namespace std;
//
char race[62550];
int lenthen;
int w,l;int times;

int main(){
	//
	{char x;
	do{
		x=getchar();
		if(x=='W'||x=='L'){
			race[++lenthen]=x;
		}
	}while(x!='E');}
	for(int i=1;i<=lenthen;i++){
		char x=race[i];
		if(abs(w-l)>=2&&(w>=11||l>=11)){
			cout<<w<<':'<<l<<endl;
			w=l=0;
			times=0;
		}
		times++;
		if(x=='W'){
			w++;
		}
		else if(x=='L'){
			l++;
		}
	}
	if(abs(w-l)>=2&&(w>=11||l>=11)){
		cout<<w<<':'<<l<<endl;
		w=l=0;
		times=0;
	}
	cout<<w<<':'<<l<<endl<<endl;
	times=l=w=0;
	for(int i=1;i<=lenthen;i++){
		char x=race[i];
		if(abs(w-l)>=2&&(w>=21||l>=21)){
			cout<<w<<':'<<l<<endl;
			w=l=0;
			times=0;
		}
		times++;
		if(x=='W'){
			w++;
		}
		if(x=='L'){
			l++;
		}
	}
	if(abs(w-l)>=2&&(w>=21||l>=21)){
		cout<<w<<':'<<l<<endl;
		w=l=0;
		times=0;
	}
	cout<<w<<':'<<l;
	return 0;
}
//ac!
