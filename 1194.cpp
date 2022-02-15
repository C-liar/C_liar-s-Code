#include<bits/stdc++.h>
#define aa 505
using namespace std;
//
int a, b;
//int k[aa][aa];
struct Edge {
	int I, J, K;
} edge[aa * aa];
bool cmp(Edge a, Edge b) {
	return a.K < b.K;
}
queue<int>q;
int father[aa];
int find(int x) {
	return father[x] == x ? x : father[x] = find(father[x]);
}

void unite(int x, int y) {
	int xx, yy;
	xx = find(x);
	yy = find(y);
	father[xx] = yy;
}
bool vis[aa][aa];

int main() {
	//
	cin >> a >> b;
	int times = 0;
	for(int i=1;i<=b;i++){
		for (int j=1;j<=b;j++){
			int k;
			cin>>k;
			if(i<j&&k!=0){
				times++;
				edge[times].I=i;
				edge[times].J=j;
				edge[times].K=k;
			}
		}
	}
	/*
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= b; j++) {
			//k[i][j]=k[j][i]=a;
			//if(i!=j){
			//vis[i][j]=1;
			++times;
			edge[times].I = i;
			edge[times].J = j;
			edge[times].K = a;
			int cin;
			std::scanf("%d", &cin);
			if (cin && cin < a) {
				edge[times].K = cin;
			}
			//}

		}
	}
	*/
	//
	/*
	for(int i=1;i<=b;i++){
		for (int j=1;j<=b;j++){
			int cin;
			std::scanf("%d",&cin);
			if(cin!=0&&cin<k[i][j]){
				k[j][i]=k[i][j]=cin;
			}
		}
	}*/
	for(int i=1;i<=b;i++){
		times++;
		edge[times].I=0;
		edge[times].J=i;
		edge[times].K=a;
	}//建立0点，与所有点相连 
	sort(edge + 1, edge + 1 + times, cmp);
	for (int i = 1; i <= b; i++) {
		father[i] = i;
	}
	int operation_time = 0;
	int total_money = 0;
	for (int i = 1; i <= times; i++) {
		if (find(edge[i].I) != find(edge[i].J)) {
			unite(edge[i].I, edge[i].J);
			operation_time++;
			total_money += edge[i].K;
			if (operation_time == b)break;
		}
	}
	/*
	if(!total_money){
		cout<<a;
		return 0;
	}*/
	cout << total_money;
	return 0;
}
//30~41&&71~75 ?
//ac
//understand
