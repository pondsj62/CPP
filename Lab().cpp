#include <stdio.h>
int main(void)
{
	char name[30], gender;
	
	printf("Please input your name:");
	scanf("%s", &name);
	fflush(stdin);
	printf("Are you male or female(M/F):");
	scanf("%c", &gender);
	printf("Sawasdee Khun %s. You are %c\n", name,gender);
	
	return 0;
}
