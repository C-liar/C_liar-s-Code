#include<bits/stdc++.h>
#define N 100010
#define l long long int
using namespace std;
//
l n, k;
l all_road;
bool enemy[N];
struct Road {
	l a, b, dis;
} road[N];
bool cmp(const Road a,const Road b){
	return a.dis>b.dis;
}
l father[N];
l find(l a){
	if(father[a]!=a){
		father[a]=find(father[a]);
	}
	return father[a];
}
void unionn(l a,l b){
	l aa,bb;
	aa=find(a);
	bb=find(b);
	father[aa]=bb;
}
l friend_road;

int main() {
	//
	cin >> n >> k;
	for (l i = 0; i < k; i++) {
		l aa;
		cin >> aa;
		enemy[aa] = 1;
	}
	for (l i = 1; i <= n - 1; i++) {
		l a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		road[i].a = a;
		road[i].b = b;
		road[i].dis = c;
		all_road+=c;
	}
	sort(road+1,road+n,cmp);
	for(l i=0;i<=n;i++){
		father[i]=i;
	}
	for(l i=1;i<=n-1;i++){
		l fa=find(road[i].a);
		l fb=find(road[i].b);
		if(!enemy[road[i].a]||!enemy[road[i].b])
		/*if(find(road[i].a)=find(road[i].b)
		&&()
		)*/
		{
			unionn(fa,fb);
			friend_road+=road[i].dis;
			enemy[fb]=1;
			enemy[fa]=1;
		}
	}
	l a=all_road-friend_road;
	cout<<a;
	return 0;
}
//sample #1 #3 ac
//#2 #4 #5 #6 #7 #8 #9 #10 wa
