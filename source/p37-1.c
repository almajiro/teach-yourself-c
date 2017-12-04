#include <stdio.h>

main()
{
    int num1, num2, choice;

    printf("enter number1: ");
    scanf("%d", &num1);

    printf("enter number2: ");
    scanf("%d", &num2);

    printf("1: plus 2: minus\n");
    printf("your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("%d\n", num1 + num2);
    }
    else{
        printf("%d\n", num1 - num2);
    }
}