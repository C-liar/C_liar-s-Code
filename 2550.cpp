#include<iostream>
#include<cstdio>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int num[1000][7],zj[7],n=0,ans[7];
int flag=0;
int main(){
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>zj[i];
	}
	for(int i=0;i<n;i++){
		//num[i][7]
		for(int j=0;j<7;j++){
			//num[i][j]
			cin>>num[i][j];
		}
	}
	//num[n][7],zj[7]
//	for (int m=0;m<7;m++){
//		//ans[m]
		for(int i=0;i<n;i++){
			int flag=0;
			//num[i][7]
			for(int j=0;j<7;j++){
				//num[i][j]
				for(int k=0;k<7;k++){
					//zj[k]
					if (num[i][j]==zj[k]){
					   flag++;
					}
				}
			}
			switch (flag) {
				case 1:
					ans[6]++;
					break;
				case 2:
					ans[5]++;
					break;
				case 3:
					ans[4]++;
					break;
				case 4:
					ans[3]++;
					break;
				case 5:
					ans[2]++;
					break;
				case 6:
					ans[1]++;
					break;
				case 7:
					ans[0]++;
					break;
				default:
					break;
			}
		}
	for(int i=0;i<7;i++){
		cout<<ans[i]<<" ";
	}
//	}
	return 0;
}
/*
case :
	ans[]++;
	break;
	*/
//ac
