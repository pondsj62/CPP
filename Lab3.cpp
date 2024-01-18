#include <stdio.h>
main(){
	int kg,cm;
	float bmi,m;
	
	printf("Type kg:");
	scanf("%d", &kg);
	printf("Type m:");
	scanf("%f", &m);
	bmi = kg/(m*m);
	printf("You BMI = %f\n" ,bmi);
	
	if(bmi >= 30){
		printf("very fat");
	}else if(bmi >= 25 && bmi <= 29.9){
		printf("fat");
	}else if(bmi >= 18.6 && bmi <= 24.9){
		printf("normal");
	}else if(bmi <= 18.5){
		printf("thin");
	}else{
		printf("Invalid");
	}
}
	
