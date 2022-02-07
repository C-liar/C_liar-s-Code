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
struct astu{
	int xh,xycj,sztzcj;
	double zhfs;
	bool youxiu;
} stu[1000];
int N;
int main(){
	//
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>stu[i].xh>>stu[i].xycj>>stu[i].sztzcj;
		stu[i].zhfs=stu[i].xycj*0.7+stu[i].sztzcj*0.3;
		if ((stu[i].xycj+stu[i].sztzcj>140)&&(stu[i].zhfs>=80)){
			stu[i].youxiu=1;
		}
		else{
			stu[i].youxiu=0;
		}
		//
	}
	for(int i=0;i<N;i++){
		if(stu[i].youxiu){
			cout<<"Excellent"<<endl;
		}
		else{
			cout<<"Not excellent"<<endl;
		}
		//
	}
	return 0;
}
