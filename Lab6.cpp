#include <stdio.h>
void Triangle(int base, int high);
main(){
	int b,h;
	printf("Please Enter Base:"); scanf("%d",&b);
	printf("Please Enter High:"); scanf("%d",&h);
	Triangle(b,h);
	
}

void Triangle(int base, int high){
	float area;
	area = 0.5*base*high;
    printf("Area is %.2f\n",area);

}
