#include<bits/stdc++.h>
#define num 10010
using namespace std;
//
queue<int>q;
int n;
int len[num];
int AOV[num][num];
int aov[num][num];
int aovin[num];
//AOV[i][j]=k:the jth in of i is point k;
int in[num], out[num];
int mininum;

int main() {
	//
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		int aa;
		scanf("%d", &aa);
		scanf("%d", &len[aa]);
		scanf("%d", &AOV[aa][++in[aa]]);
		out[AOV[aa][in[aa]]]++;
		aovin[AOV[aa][in[aa]]]++;
		aov[AOV[aa][in[aa]]][aovin[aa]]=aa;
		while (AOV[aa][in[aa]]) {
			scanf("%d", &AOV[aa][++in[aa]]);
			out[AOV[aa][in[aa]]]++;
			aovin[aa]++;
			aov
			   	[AOV[aa][in[aa]]]
				[aovin[AOV[aa][in[aa]]]]
				=aa;
		}
	}//amazing! god's code
	
	/*
	for(int i=1;i<=n;i++){
		int aa;
		scanf("%d",&aa);
		scanf("%d",&len[aa]);
		int next,numm=0;
		scanf("%d",&next);
		while(next){
			numm++;
			AOV[next][numm]=aa;
			
		}
	}*/
	//toposort
	for(int i=1;i<=n;i++){
		if(!in[i]){
			q.push(i);
		}
	}
	int del_number=0;
	while(!q.empty()){
		int i=q.front();
		q.pop();
		del_number++;
		for(int j=1;j<=aovin[i];j++){
			int c=aov[i][j];
			len[i]+=len[c];
		}
		mininum=max(len[i],mininum);
		for(int j=1;j<=out[i];j++){
			if(!in[AOV[i][j]]){
				q.push(AOV[i][j]);
			}
		}
	}
	cout<<mininum;
	return 0;
}
