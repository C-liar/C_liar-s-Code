#include<bits/stdc++.h>
//#include<numeric>
#define l long long
using namespace std;
//by C_liar
int x_0,y_0;
bool repeat;
int times;
l greatest_common_divisor(l x,l y){
	if(y==0){
		return x;
	}
	return greatest_common_divisor(y,x%y);
}

int main(){
	//
	cin>>x_0>>y_0;
	/*x_0,y_0.
	 *assume P=x_0*m,Q=x_0*n,
	 *m and n are relatively prime,
	 *so,least common multiple of P and Q is x_0*m*n
	 *it is obviously
	 *so,the conclusion is:
	 *	P*Q=y_0*x_0
	 */
	for(int i=1;i<=sqrt((double)(x_0*y_0));i++){
		if(!((x_0*y_0)%i)&&greatest_common_divisor(i,x_0*y_0/i)==x_0){
			//PQ%i==0                 gcd          P     Q     ==x_0
			if(x_0*y_0/i==i){
				repeat=1;
			}
			times++;
		}
	}
	cout<<times*2-repeat;
	return 0;
}
//ac!
