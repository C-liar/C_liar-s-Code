#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int num[100],ly[100],n=0;//number lovely n
int main(){
	cin>>n;
	for(int i=0;i<n;i++){//
		cin>>ly[i];
		for(int j=0;j<i;j++){//
			if(ly[i]>ly[j]){
				num[i]+=1;
			}
		}
	}
	for (int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
