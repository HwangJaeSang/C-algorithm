#include<stdio.h>

int main(){
	int s[5];
	int i,x=0;
	int min,temp = 0;
	
	for(i = 0;i<5;i++)
		scanf("%d", &s[i]);
	
	min = s[0];
	while(x < 5){
		for(i = x+1;i<4;i++){
			if(s[x] > s[i+1]){
				min = s[i+1];
				temp = s[x];
				s[x] = min;
				s[i+1] = temp;
			}
		}
		x++;
	}
	
	for(i = 0; i < 5; i++)
		printf("%d ", s[i]);
		
	return 0;
}
