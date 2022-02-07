#include<bits/stdc++.h> //all
#define aa 510
using namespace std;
//
int S,P,D;
//S:superpoint;P:point;D:distance;
//int co[aa][aa];//coordinate
int xx[aa],yy[aa];//another coordinate
struct co{
	int x,y;
	double d;
	//distance,x,y
}c[100000001];//weight
//maybe overflow?
int p;//point number
bool cmp(co a,co b){
	return a.d<b.d;
}
int father[aa];
int find_your_father(int a){
	if(father[a]!=a){
		find_your_father(father[a]);
	}
	return father[a];
	//maybe can return a;
}
void union_your_father(int a,int b){
	int aaa=find_your_father(a);
	int bbb=find_your_father(b);
	father[aaa]=bbb;
}

int main(){
	//
	cin>>S>>P;
	for(int i=1;i<=P;i++){
		cin>>xx[i]>>yy[i];
		for (int j=1;j<i;j++){
			p++;
			c[p].d= //under
			sqrt((double)
				(
					(xx[i]-xx[j])*(xx[i]-xx[j])
					+(yy[i]-yy[j])*(yy[i]-yy[j])
				)
			);
			c[p].x=i;
			c[p].y=j;
		}
	}
	//
	for(int i=1;i<=p;i++){
		father[i]=i;
	}
	//int total=0;
	int k=0;//number of tree
	sort(c+1,c+p+1,cmp);
	for(int i=1;i<=p;i++){
		if(
		   find_your_father(c[i].x)
		   !=
		   find_your_father(c[i].y)
		){
			union_your_father(c[i].x,c[i].y);
			k++;
			
			if(k==P-S){
				break;
			}
		}
	}
	printf("%.2lf",c[k].d);
	return 0;
}
