#include<bits/stdc++.h>

using namespace std;
//
int N,M;
char s[505][52];
char p[505][52];
//char ap[505][4][4][4];
int a[5][5][5]={0};
int tmd(char a){
	switch (a) {
	case'A':
		return 0;
		break;
	case'C':
		return 1;
		break;
	case'G':
		return 2;
		break;
	case'T':
		return 3;
	default:
		return 4;
		break;
	}
}
char gett(char x){
	if(x=='A'){
		return 'A';
	}
	if(x=='C'){
		return 'C';
	}
	if(x=='G'){
		return 'G';
	}
	if(x=='T'){
		return 'T';
	}
}
int ans=0;
int main(void){
	//
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			char x;
			cin>>x;
			s[i][j]=gett(x);
			//if(x=='A'||x=='T'||x=='C'||x=='G'){s[i][j]=x;}
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			char x;
			cin>>x;
			p[i][j]=gett(x);
			//M+1 for get \n
			//p[i][j]=getchar();
		}
	}
	for(int i=1;i<=M-2;i++){
		for(int j=i+1;j<=M-1;j++){
			for(int k=j+1;k<=M;k++){
				memset(a,0,sizeof(a));
				bool flag=1;
				for(int n=1;n<=N;n++){
					if((tmd(s[n][i])!=5&&tmd(s[n][j])!=5&&tmd(s[n][k])!=5))
					//ap[n][0][0][0]=p[]
					a[tmd(s[n][i])][tmd(s[n][j])][tmd(s[n][k])]=10;
				}
				for(int n=1;n<=N;n++){
					if(a[tmd(p[n][i])][tmd(p[n][j])][tmd(p[n][k])]&&(tmd(p[n][i])!=5&&tmd(p[n][j])!=5&&tmd(p[n][k])!=5)){
						flag=0;
						break;
					}
				}
				if(flag){
					ans++;
				}
			}
		}
	}
	cout<<ans;
}
//10->70->ac!
