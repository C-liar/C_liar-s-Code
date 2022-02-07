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
/*void print(char a){
	switch (a) {
		case '0':
			
			//
			break;
		case 1:
			
			//
			break;
		default:
			
			//
			break;
	}
}
*/

char print[10][5][4]={
	{
	{'X','X','X',},
	{'X','.','X',},
	{'X','.','X',},
	{'X','.','X',},
	{'X','X','X',},
	},
	{
	{'.','.','X',},
	{'.','.','X',},
	{'.','.','X',},
	{'.','.','X',},
	{'.','.','X',},
	},
	{
	{'X','X','X',},
	{'.','.','X',},
	{'X','X','X',},
	{'X','.','.',},
	{'X','X','X',},
	},
	{
	{'X','X','X',},
	{'.','.','X',},
	{'X','X','X',},
	{'.','.','X',},
	{'X','X','X',},
	},
	{
	{'X','.','X',},
	{'X','.','X',},
	{'X','X','X',},
	{'.','.','X',},
	{'.','.','X',},
	},
	{
	{'X','X','X',},
	{'X','.','.',},
	{'X','X','X',},
	{'.','.','X',},
	{'X','X','X',},
	},
	{
	{'X','X','X',},
	{'X','.','.',},
	{'X','X','X',},
	{'X','.','X',},
	{'X','X','X',},
	},
	{
	{'X','X','X',},
	{'.','.','X',},
	{'.','.','X',},
	{'.','.','X',},
	{'.','.','X',},
	},
	{
	{'X','X','X',},
	{'X','.','X',},
	{'X','X','X',},
	{'X','.','X',},
	{'X','X','X',},
	},
	{
	{'X','X','X',},
	{'X','.','X',},
	{'X','X','X',},
	{'.','.','X',},
	{'X','X','X',},
	},
};
int num;
int willprint[100];
string a;
int main(){
	//
	cin>>num;
	cin>>a;
	for(int i=0;i<num;i++){
		if (a[i]=='1') willprint[i]=1;
		else if (a[i]=='2') willprint[i]=2;
		else if (a[i]=='3') willprint[i]=3;
		else if (a[i]=='4') willprint[i]=4;
		else if (a[i]=='5') willprint[i]=5;
		else if (a[i]=='6') willprint[i]=6;
		else if (a[i]=='7') willprint[i]=7;
		else if (a[i]=='8') willprint[i]=8;
		else if (a[i]=='9') willprint[i]=9;
		else if (a[i]=='0') willprint[i]=0;
		//
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<num;j++){
			if (j!=0){
			printf(".");}
			for(int k=0;k<3;k++){
				printf("%c",print[willprint[j]][i][k]);
				//
			}
			
			//
		}
		printf("\n");
		//
	}
	return 0;
}

/*
case '':
	cout<<
	//
	break;
*/
/*

{
{'','','',},
{'','','',},
{'','','',},
{'','','',},
{'','','',},
},

*//*
else if (a[i]=='') willprint[i]=;
*/
//ac!!!
