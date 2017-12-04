#include <stdio.h>

main(){
  int i;
  for(i=17; i<=100; i++){
    if(i % 17 == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
}
