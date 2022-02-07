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
int a[5][6]={{1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8},{4,5,6,7,8,9},{5,6,7,8,9,0}};

int main(){
	//
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
