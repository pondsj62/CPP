#include <stdio.h>
void area (int width,int high);
main(){
	double width,high;
	printf("Please input the width: ");
	scanf("%lf", &width);
	printf("Please input the high: ");
	scanf("%lf", &high);
	
}
void area(int width,int high){
	float area;
	area=width*high;
	printf("The area is%.2lf",area);
	return area;
	
}
