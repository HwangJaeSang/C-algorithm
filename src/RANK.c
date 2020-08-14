#include<stdio.h>

int main(){
	int M,N,i,J;
	int JUMSU[10],RANK[10];
	
	M = 0;
	
	do{
		scanf("%d", &JUMSU[M]);
		M++;
	}while(M<10);
	
	N = 10;
	i = 0;
	
	while(i<N){
		RANK[i] = 1;
		i++;
	}
	
	i = 0;
	
	while(i<N){
		for(J = 0; J<N; J++)
			if(JUMSU[i] < JUMSU[J])
				RANK[i]++;
		i++;
	}
	
	for(i = 0; i<10; i++)
		printf("%d %d\n", JUMSU[i],RANK[i]);
	
	return 0;
}
