#include <stdio.h>

int main(void)
{
	char firstname[20], middlename[20], lastname[20];

	printf("enter your name: ");
	scanf("%20s%20s%20s", firstname, middlename, lastname);

	printf("%s %s %s\n", firstname, middlename, lastname);
}
