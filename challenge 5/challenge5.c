#include<stdio.h>

int main (){

    int i;

    for (i=1;i <= 100;i++) {
    printf("%d",i);
    if (i%3 == 0){
        printf("FIZZ");
    }
    if (i%5 == 0){
        printf("BUZZ") ;
    }
    if (i%3 != 0 && i%5 != 0){
     //   printf("%d",i);
    }

    printf("\n");
    printf("\n");
  }
    return 0;
}
