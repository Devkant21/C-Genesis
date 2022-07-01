#include<stdio.h>

int main() {
	char name;
	int dob;
	printf("Enter your name");
	scanf("%s", &name);
	printf("Enter dob");
	scanf("%d", &dob);
	printf("your name is %s \n", &name);
	printf("your dob is %d", dob);
	return 0;
}
// "int d", "int m", "int y";
