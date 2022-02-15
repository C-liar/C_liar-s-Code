#include<bits/stdc++.h>
#define aa 10010
using namespace std;
//
int n;
struct Rug{
	int a,b,g,k;
}rug[aa];
int x,y;

int main(){
	//
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&rug[i].a);
		scanf("%d",&rug[i].b);
		scanf("%d",&rug[i].g);
		scanf("%d",&rug[i].k);
	}
	cin>>x>>y;
	for(int i=n;i>=1;i--){
		if((x>=rug[i].a&&x<=rug[i].a+rug[i].g)
		&&(y>=rug[i].b&&y<=rug[i].b+rug[i].k)){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
//ac
