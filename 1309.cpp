#include<bits/stdc++.h>
#define N 100010
#define NN 200010
#define r register

using namespace std;
//
int n,n2,Round,q;
struct Player{
	int num,mark,power;
}player[NN];
inline int cmp(Player a,Player b){
	if(a.mark==b.mark){
		return a.num<b.num;
	}
	return a.mark>b.mark;
}
/*
inline int read(){
	r int x,total;
	r int minus_sign=1;
	x=getchar();
	while(x<'0'||x>'9'){
		if(x='-'){
			minus_sign=-1;
		}
		x=getchar();
	}
	while(x<'9'&&x>'0'){
		total=total*10+x-'0';
		x=getchar();
	}
	return minus_sign*total;
}*///          
//this will wa 

int main(void){
	//
	cin>>n>>Round>>q;
	n2=2*n;
	for(r int i=1;i<=n2;i++){
		scanf("%d",&player[i].mark);
		//player[i].mark=read();
		player[i].num=i;
	}
	for(r int i=1;i<=n2;i++){
		scanf("%d",&player[i].power);
		//player[i].power=read();
	}
	//sort+O2 maybe OK
	//O(R(2N+2Nlog2N))=186096404.7
	sort(player+1,player+1+n2,cmp);
	for(r int i=1;i<=Round;i++){
		//
		for(r int i=1;i<=n;i++){
			if(player[2*i-1].power>player[2*i].power){
				player[2*i-1].mark++;
			}
			else{
				player[2*i].mark++;
			}
		}
		//
		sort(player+1,player+1+n2,cmp);
	}
	printf("%d",player[q].num);
}
//O2,
//Subtask #0
//#2 TLE
//Subtask #1
//#10 TLE
