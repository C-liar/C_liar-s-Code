#include<bits/stdc++.h>
#define nn 100010
#define ll long long
using namespace std;
//
int n;
int times_limit_i;//TLE byebye~
int price[nn],t[nn];
int trans[nn];
bool used[nn];
ll total;

int main(){
	//
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&trans[i],&price[i],&t[i]);	
	}
	for(int i=1;i<=n;i++){
		if(!trans[i]){//subway
			total+=price[i];
			//times=t[i];
			//
		}
		else{//bus
			int before=0;
			//bool find_it=1;
			for (int j=times_limit_i;j<=i;j++){
				if(t[i]-t[j]>=45){
					times_limit_i=j;//judge
				}
				if(!trans[j]&&price[j]>=price[i]&&t[i]-t[j]<=45&&!used[j]){
					before=j;
					used[j]=1;
					break;
					//find_it=1;
				}
			}
			if(!before){
				total+=price[i];
			}
		}
	}
	cout<<total;
	return 0;
}
//ac!
