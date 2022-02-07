#include<iostream>//cin cout endl
#include<cstdio>//scanf printf
#include<cmath>//all math
//#include<bits/stdc++.h> //all
#include<cstring>//string
#include<string>//string
#include<iomanip>//?
#include<stack>//stack <n> sth.
#include<queue>//duilie head tail
#include<algorithm>//
#include<vector>
using namespace std;
//
int ni, op;
//vector <int> dui;
/*struct d{
	int n,lc,rc,p;
}*/int num[1000001];
int last=0;//duimo diyige feikongyuansu

void swp(int &aa,int &bb){//jiaohuan
	int t;
	t=aa;aa=bb;bb=t;
}

void push(int anum){
	int a=last;
	/*num[a]=anum;
	a++;last++;
	while(a-1>1&&num[a-1]<num[(a-1)/2]){
		swp(num[a-1],num[(a-1)/2]);
		a=(a-1)/2+1;
		//
	}*/
	last++;
	num[last]=anum;a=last;
	while(a>1&&num[a]<num[a/2]){
		swp(num[a],num[a/2]);
		a/=2;
		//
	}
}

int get(){
	
	int geet=num[1];//fanhuizhi
	num[1]=num[last];
	//num[last]=0;
	last--;
	
	int a=1;
	while(a*2<=last){
		if(a>last/2){
			return geet;
			//
		}
		else{
			if(num[a]<=min(num[a*2],num[a*2+1])){
				return geet;
				//
			}
			else{
				if(num[a*2]>num[a*2+1]){
					swp(num[a*2+1],num[a]);
					a=a*2+1;
					//
				}
				else{
					swp(num[a*2],num[a]);
					a*=2;
				}
			}
		}
		//
	}
	return geet;
}
int data[1000001],danum=0;
int voo;
int main(){
	//
	cin>>ni;
	//while(ni){
		//cin>>op;
		/*if(op==1){
			int vooo=0;
			cin>>vooo;
			push(vooo);
			//
		}*/
		//
		for(int i=0;i<ni;i++){
			cin>>data[danum];
			danum++;
			if(data[danum-1]==1){
				cin>>data[danum++];
				//
			}
			//
		}
		for(int i=0;i<danum;i++){
			int vooo=0;
			if(data[i]==1){
				i++;
				vooo=data[i];
				op=1;
				//
			}
			else if(data[i]==2){
				op=2;
			}
			else{
				op=3;
			}
			//
			//
		switch (op) {
			case 1:
				
				
				push(vooo);
				//
				break;
			case 2:
				cout<<get()<<endl;
				//
				break;
			case 3:
				voo=get();
				//
				break;
			default:
				//
				//
				break;
		}
		}
		ni--;
	//}
	return 0;
}
