#include<bits/stdc++.h>

using namespace std;
//
int n;
bool finish;
char c[32][32];
inline void find_winner(int i,int j,int dir){
	if(dir==1){
		if(c[i][j]==c[i-2][j]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==2){
		if(c[i][j]==c[i-2][j+2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==3){
		if(c[i][j]==c[i][j+2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==4){
		if(c[i][j]==c[i+2][j+2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==5){
		if(c[i][j]==c[i+2][j]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==6){
		if(c[i][j]==c[i+2][j-2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==7){
		if(c[i][j]==c[i][j-2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
	if(dir==8){
		if(c[i][j]==c[i-2][j-2]){
			cout<<c[i][j];
			finish=1;
			return;
		}
	}
}
/*

if(dir==1){
	if(c[i][j]==c[i][j-2]){
		cout<<c[i][j];
		finish=1;
		return;
	}
}
find_winner(i,j,dir);
*/

int main(){
	//
	cin>>n;
	for(register int i=0;i<=n+1;i++){
		c[0][i]='.';
		c[i][0]='.';
		c[n-i+1][n+1]='.';
		c[n+1][n-i+1]='.';
	}
	for(register int i=1;i<=n;i++){
		for(register int j=1;j<=n;j++){
			char x;
			cin>>x;
			c[i][j]=x;
		}
	}
	for(register int i=1;i<=n;i++){
		for(register int j=1;j<=n;j++){
			if(c[i][j]=='.'){
				continue;
			}else{
				//register char temp=c[i][j];
				int dir=0;
 				/*
			  	 *      8  1  2
			  	 *      7 dir 3
			  	 *      6  5  4
				 */
				if(c[i][j]==c[i-1][j]){
					dir=1;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i-1][j+1]){
					dir=2;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i][j+1]){
					dir=3;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i+1][j+1]){
					dir=4;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i+1][j]){
					dir=5;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i+1][j-1]){
					dir=6;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i][j-1]){
					dir=7;
					find_winner(i,j,dir);
				}
				if(c[i][j]==c[i-1][j-1]){
					dir=8;
					find_winner(i,j,dir);
				}
				if(finish==1){
					return 0;
				}
			}
		}
	}
	if(!finish){
		cout<<"ongoing";
	}
	return 0;
}
//AC
