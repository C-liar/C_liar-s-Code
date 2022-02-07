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
int N;
struct stu{
	string nm;
	int yw,sx,yy,tt;
}a[1000];

int main(){
	//
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a[i].nm>>a[i].yw>>a[i].sx>>a[i].yy;
		a[i].tt=a[i].yw+a[i].sx+a[i].yy;
		
		//
	}
	for(int j=0;j<N-1;j++){
		for(int i=0;i<N-1;i++){
			if(a[i].nm>a[i+1].nm){
				swap(a[i].nm,a[i+1].nm);
				swap(a[i].yw,a[i+1].yw);
				swap(a[i].sx,a[i+1].sx);
				swap(a[i].yy,a[i+1].yy);
				swap(a[i].tt,a[i+1].tt);
			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if((i!=j)&&
			(abs(a[i].sx-a[j].sx)<=5)&&
			(abs(a[i].yw-a[j].yw)<=5)&&
			(abs(a[i].yy-a[j].yy)<=5)&&
			(abs(a[i].tt-a[j].tt)<=10)){
				cout<<a[i].nm<<" "<<a[j].nm<<endl;
			}
			//
		}
		//
	}
	return 0;
}
//ac
