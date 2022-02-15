#include<bits/stdc++.h>
using namespace std;
//
int Map[12][12];
int times;
struct Farmer {
	int x;
	int y;
	int to;
} F;
struct Cow {
	int x;
	int y;
	int to;
} C;
/*
 *         1
 *    4   *to   2
 *         3
 *
 */
inline int get_map(int i, int j) {
	char x;
	cin>>x;
	if (x == '.')return 0;//
	if (x == '*')return 1;//
	if (x == 'F') {
		F.x = j;
		F.y = i;
		F.to=1;
		return 2;
	}//farmer
	if (x == 'C') {
		C.x = j;    
		C.y = i;
		C.to=1;
		return 3;
	}//cow
	if(x=='\n'){
		return 1;
	}
	return 1;
}
inline void turn(int to,int fc){
	if(to!=4){
		if(fc==2){
			F.to++;
		}
		else if(fc==3){
			C.to++;
		}
	}
	else if(to==4){
		if(fc==2){
			F.to=1;
		}
		else if(fc==3){
			C.to=1;
		}
	}
}
inline void move
	(int &x,int &y,int to,int fc){
    //cout<<"here"<<endl;
	//times++;
	if(to==1){
		if(Map[y-1][x]==0||Map[y-1][x]==2||Map[y-1][x]==3){
			Map[y][x]=0;
			Map[--y][x]=fc;
		}
		else if(Map[y-1][x]==1){
			turn(to,fc);
		}
	}
	else if(to==2){
		if(Map[y][x+1]==0||Map[y][x+1]==2||Map[y][x+1]==3){
			Map[y][x]=0;
			Map[y][++x]=fc;
		}
		else if(Map[y][x+1]==1){
			turn(to,fc);
		}
	}
	else if(to==3){
		if(Map[y+1][x]==0||Map[y+1][x]==2||Map[y+1][x]==3){
			Map[y][x]=0;
			Map[++y][x]=fc;
		}
		else if(Map[y+1][x]==1){
			turn(to,fc);
		}
	}
	else if(to==4){
		if(Map[y][x-1]==0||Map[y][x-1]==2||Map[y][x-1]==3){
			Map[y][x]=0;
			Map[y][--x]=fc;
		}
		else if(Map[y][x-1]==1){
			turn(to,fc);
		}
	}
}
bool catch_cow(){
	if(F.x==C.x&&F.y==C.y){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	//
	for(int i=0;i<=11;i++){
		Map[0][i]=1;
		Map[i][0]=1;
		Map[i][11]=1;
		Map[11][i]=1;
	}
	for (int i = 1; i <= 10; i++) { //y
		for (int j = 1; j <= 10; j++) { //x
			Map[i][j] = get_map(i, j);
		}
	}
    /*
     *for(int i=0;i<=11;i++){
     *for(int j=0;j<=11;j++)
     *cout<<Map[i][j];cout<<endl;}
     */
	//thanks for him.
	
	while(!catch_cow()&&times<=160000){
		times++;
		move(F.x,F.y,F.to,2);
		move(C.x,C.y,C.to,3);
	}
	if(times>=160000){
		cout<<0;
	}
	else{
		cout<<times;
	}
	return 0;
}
//ac!
