#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
int prm[26]={2,3,5,7,11,13,17,19,23,27,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int a[26];
char b[100];
int main(){
	scanf("%s",b);
	for(int i=0;i<(int)(strlen(b));i++){
		switch (b[i]) {
			case 'a':
			                a[0]++;
			                break;
			case 'b':
			                a[1]++;
			                break;
			case 'c':
			                a[2]++;
			                break;
			case 'd':
			                a[3]++;
			                break;
			case 'e':
			                a[4]++;
			                break;
			case 'f':
			                a[5]++;
			                break;
			case 'g':
			                a[6]++;
			                break;
			case 'h':
			                a[7]++;
			                break;
			case 'i':
			                a[8]++;
			                break;
			case 'j':
			                a[9]++;
			                break;
			case 'k':
			                a[10]++;
			                break;
			case 'l':
			                a[11]++;
			                break;
			case 'm':
			                a[12]++;
			                break;
			case 'n':
			                a[13]++;
			                break;
			case 'o':
			                a[14]++;
			                break;
			case 'p':
			                a[15]++;
			                break;
			case 'q':
			                a[16]++;
			                break;
			case 'r':
			                a[17]++;
			                break;
			case 's':
			                a[18]++;
			                break;
			case 't':
			                a[19]++;
			                break;
			case 'u':
			                a[20]++;
			                break;
			case 'v':
			                a[21]++;
			                break;
			case 'w':
			                a[22]++;
			                break;
			case 'x':
			                a[23]++;
			                break;
			case 'y':
			                a[24]++;
			                break;
			case 'z':
			                a[25]++;
			                break;
		}
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			int imp=0;
			imp=a[j];
			a[j]=max(imp,a[j+1]);
			a[j+1]=min(imp,a[j+1]);
		}
	}
	int aa=0;
	for(int i=0;i<26;i++){
		if(a[i]){
			aa++;
		}
	}
	for(int i=0;i<26;i++){
		int bb= a[0]-a[aa-1];
		if (bb==prm[i]) {
			cout<<"Lucky Word\n"<<bb;
			return 0;
			}
	}
	cout<<"No Answer\n0";
/*	int j=0;
	for(char i='a';i<='z';i++){
		
		cout<<"case '"<<i<<"':"<<endl;
		cout<<"		a["<<j<<"]++;"<<endl;
		cout<<"		break;"<<endl;
		j++;
	}*/
	
	return 0;
}
//ac
