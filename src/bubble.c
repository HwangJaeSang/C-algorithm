#include <stdio.h>

int main(){
	int num[5];
	int i,x = 0, temp = 0;
	
	for(i = 0; i < 5; i++)
		scanf("%d", &num[i]);
		
	while(x < 5){
		for(i = 0; i < 4; i++)
			if(num[i] > num[i+1]){
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}
		x++;
	}
	
	for(i = 0; i < 5; i++)
		printf("%d ", num[i]);
	return 0;
}
