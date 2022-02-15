#include<bits/stdc++.h>
#define aa 100000010
using namespace std;
//
int date_1,date_2;
int num;
//92200229
//int is_right[aa];
//int date[aa];//date[date_]=date_num

int main(){
	//
	cin>>date_1>>date_2;
	for(int i=1;i<=12;i++){//month
		//dat+=i*100;
		for(int j=1;j<=31;j++){//date(except 0229)
			int dat=0;
			dat+=i*100;
			if((i==2&&j>28)||((i==4||i==6||i==9||i==11)&&j>30)){
				break;
			}
			dat+=j;
			int m1=0,m2=0,d1=0,d2=0;
			if(i>=10){
				m1=1;m2=i-10;
			}else{
				m2=i;
			}
			d1=j/10;d2=j-d1*10;
			if(d2==0){
				continue;
			}
			dat+=10000000*d2+1000000*d1+100000*m2+10000*m1;
			//is_right[dat]=1;
			if(dat<=date_2&&dat>=date_1){
				num++;
			}
		}
	}
	if(92200229<=date_2&&92200229>=date_1){
		num++;
	}
	/*
	int counta=0;
	for(int i=1;i<100000000;i++){
		if(is_right[i]){
			counta++;
		}
		date[i]=counta;
	}
	cin>>date_1>>date_2;
	cout<<date[date_2]-date[date_1];
	*/
	cout<<num;
	return 0;
}
//ac
