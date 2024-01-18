#include<stdio.h>
float Total(int hour);
const int Money = 350;
void Change (int pay,int hour);
main(){
	int hour,pay;
	printf("Enter hour:"); scanf("%d",&hour);
	printf("Enter pay:"); scanf("%d",&pay);
	Change(pay,hour);
	
	
}
float Total(int hour){
	float total = hour*Money;
	return total;

}
void Change (int pay,int hour){
	float change;
	change = pay-Total(hour);
	printf("Total %.2f\n",Total(hour));
	printf("Change %.2f\n",change);
	
}
