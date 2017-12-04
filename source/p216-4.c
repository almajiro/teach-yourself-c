#include <stdio.h>

int main(void)
{
	char name[80];
	char birthday[9]; // mm/dd/yy
	char phone[9];

	puts("enter your name, birthday and phone number");
	scanf("%s%8s%8s", name, birthday, phone);

	printf("%s %s %s\n", name, birthday, phone);
}
