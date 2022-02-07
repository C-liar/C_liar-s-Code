#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){
	int n=0,min=1001,a=0;
	
	cin>>n;
	while (n!=0){
		cin>>a;
		min=a<min?a:min;
		n--;
	}
	cout<<min;
}
