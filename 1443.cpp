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
struct zuobiao{
	int x,y;
	int times;//chongfucishu
}a,b,c;
queue <zuobiao> maxy;// x,y
int qipan[401][401],n,m,x,y;
bool qipancishu[401][401];//bianlishitiaoguoyibianlidedian
int tiaomax[8]={2 ,1 ,-1,-2,-2,-1, 1, 2};
int tiaomay[8]={-1,-2,-2,-1,1 ,2 ,2 , 1};

bool ifbuyuejie(int x,int y){
	if ((x<=n)&&(x>0)&&(y<=m)&&(y>0)){
		if (!qipancishu[x][y]) return 1;
		else return 0;
	}
	else return 0;
}

int ii=1;  //.times as a new timer

bool zouma(int madex,int madey){
	a.x=madex;
	a.y=madey;
	a.times=0;
	int flag=0;
	for(int i=0;i<8;i++){
		if (ifbuyuejie(madex+tiaomax[i],madey+tiaomay[i])/*&&ifbuyuejie(madex,madey)*/){
			qipancishu[madex+tiaomax[i]][madey+tiaomay[i]]=1;
			b.x=madex+tiaomax[i];b.y=madey+tiaomay[i];
			if (b.times==0){
				b.times+=1;
			}
			else{
				b.times=c.times+1;
			}
			maxy.push(b);
			flag=1;
			qipan[b.x][b.y]+=b.times;
			//cout<<b.x<<b.y<<endl;
		}
		//else cout<<"here"; 
	}
	//ii++;
	if (flag==0){
		//cout<<"here";
		return 0;} 
	return 1;
}

int main(){
	cin>>n>>m>>x>>y;//???
	//
	qipancishu[x][y]=1;//weishenme x he y hui gaofan???
	qipan[x][y]=-2;
	c.x=x;c.y=y;c.times=0;
	//int ii=0;
	maxy.push(c);
	while(!maxy.empty()){
		//
		zouma(c.x,c.y);
		//cout<<c.x<<c.y<<endl;
		c=maxy.front();
		maxy.pop();
		//qipan[c.y][c.x]=ii;
		//qipan[b.y][b.x]=ii;
		//ii++;
	}
	for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if (qipan[i][j]==0) qipan[i][j]=-1;
	}
	}
	qipan[x][y]=0;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		printf("%-5d",qipan[i][j]);
	}
	cout<<endl;
	}
	
	return 0;
}
//aaaaaac
