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
long long s[31];
int i;
/*long long forr(int ii){
	long long sum=0;
	if (ii==0) return 0; 
		for(int a=0;a<i+1;a++){
			sum+=forr(ii-1);
			sum+=s[a];
		}
	
	return sum;
}
*/
int main(){
	long long sum=0;
	while(cin>>s[i])
	{i++;}
	//cin>>s[0]>>s[1];i=2;
	for(int ii=0;ii<i;ii++){
		//cout<<endl;
		sum+=s[ii];
		//
	}
	sum=sum*pow(2,i-1);
	cout<<sum;
	//cout<<forr(i);
	return 0;
}//ac 
