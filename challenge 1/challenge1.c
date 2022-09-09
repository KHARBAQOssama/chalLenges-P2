#include<stdio.h>
int main () {
    int num;

    printf ("entrer le nombre : ");
    scanf("%d",&num);


    if (num % 2 == 0){
        printf("le nombre %d est pair",num);
    }
    else{
        printf("le nombre %d est impaire",num);
    }


    return 0;
}
