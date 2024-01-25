#include<stdio.h>
void Money(int hour);
const int M = 450;

main(){
	int hour;
	printf("Enter hour:"); scanf("%d",&hour);
	Money(hour);
	
}
void Money(int hour){
	float total;
	total = hour*M;
	printf("Total %.2f\n",total);
}

