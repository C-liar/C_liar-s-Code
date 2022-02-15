#include<bits/stdc++.h> //all

using namespace std;
//
int N,M;
int father[200010];
int finda(int xii);

void uniona(int xi,int yi){
	xi=finda(xi);yi=finda(yi);
	father[xi]=yi;
}

int finda(int xii){
	if(father[xii]==xii){
		return xii;
	}
	return father[xii]=finda(father[xii]);
}

int main(){
	//
	cin>>N>>M;
	for(int i=1;i<=M;i++){
		father[i]=i;
		//
	}
	for(int i=1;i<=M;i++){
		int z,x,y;
		cin>>z>>x>>y;
		if(z==1){
			uniona(x,y);
			//
		}
		else if(z==2){
			if(finda(x)==finda(y)){
				cout<<"Y"<<endl;
				//
			}
			else if(finda(x)!=finda(y)){
				cout<<"N"<<endl;
				//
			}
			//
		}
		//
	}
	return 0;
}

/*test,AC
4 7
2 1 2
1 1 2
2 1 2
1 3 4
2 1 4
1 2 3
2 1 4
#1#3#4#5#6#7#8AC,#2#9#10RE
*/
