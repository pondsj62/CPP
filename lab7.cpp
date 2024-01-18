#include <stdio.h>
void Circle( int Ra);
const float PI = 3.14;
main(){
	int Ra;
	printf("Please Enter Radius:"); scanf("%d",&Ra);
	Circle(Ra);
	
}

void Circle(int Ra){
	float area;
	area = PI*(Ra*Ra);
    printf("Area is %.2f\n",area);

}
