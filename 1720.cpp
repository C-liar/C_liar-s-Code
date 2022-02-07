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
int n;
double Fn;

int main(){
	//
	cin>>n;
	printf("%.2lf",(((pow(((1+sqrt(5))/2),n)))-(pow(((1-sqrt(5))/2),n)))/(sqrt(5)));
	return 0;
}
//ac
