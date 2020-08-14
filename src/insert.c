#include <stdio.h>

int main(){
	int num[5];
	int i,k,key;
	
	for(i = 0; i < 5; i++)
		scanf("%d", &num[i]);
		
	for(i = 1; i < 5; i++){
		key = num[i];
		for(k = i-1; k >= 0; k--)
			if(num[k] > key)
				num[k+1] = num[k];
			else
				break;
		num[k+1] = key;
	}
	
	for(i = 0; i < 5; i++)
		printf("%d ", num[i]);
	
	return 0;
}
