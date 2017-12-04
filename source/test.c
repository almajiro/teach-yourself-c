#include <stdio.h>
#include <wchar.h>

int main()
{
   printf("int = %d\n", sizeof(int));
   printf("int* = %d\n", sizeof(int*));
   printf("void* = %d\n", sizeof(void*));
   printf("long int = %d\n", sizeof(long int));
   printf("long long = %d\n", sizeof(long long));
   printf("short int = %d\n", sizeof(short int));
   printf("float = %d\n", sizeof(float));
   printf("double = %d\n", sizeof(double));
   printf("char = %d\n", sizeof(char));
   printf("wcahr_t = %d\n", sizeof(wchar_t));
}
