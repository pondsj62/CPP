
#include<stdio.h>
float Total(int hour);
const int Money = 350;
void Change (int pay,int hour);
void result(int score);
int cond = 5;
main(){
	int hour,pay,score;
	printf("Enter hour:"); scanf("%d",&hour);
	printf("Enter pay:"); scanf("%d",&pay);
	Change(pay,hour);
	printf("Enter test result : "); scanf("%d",&score);
	result(score);
	
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
void result(int score){
 if (score >= cond){
  printf("You passed the test!");
 }
 else {
  printf("You failed the test...");
 }
}
