#include<stdio.h>
#include <cstdlib>

void Check(int* p, int m, int n){
   int i,j;
     for (i = 1; i <= n; i++)
	   {    for (j = 1; j <= i&&j<=m; j++)
	         if (i % j == 0)        p[i]++;
			   }}
			   
			   void IsPrime(int* p, int n)  {
			   	  for (int i = 1; i <= n; i++)  
					     if (p[i] % 2 == 1)  
						     printf("%d ", i);} 
							 int main(){ 
							  int M, N;
							    scanf("%d%d", &M, &N); 
								 int* p = (int* )
								 malloc((N+1) * sizeof(int));
								 for (int i = 0; i <= N; i++)     p[i] = 0; 
								  Check(p, M, N); 
								   IsPrime(p, N+1); 
								    return 0;}
								    //others
