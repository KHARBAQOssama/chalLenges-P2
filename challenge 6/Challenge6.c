#include<stdio.h>
#include<string.h>
int main (){

    char first_word[30], second_word[30];

    printf("enter the first word:");
    scanf("%s",first_word);
    printf("enter the second word:");
    scanf("%s",second_word);

    int result ;
    result=strcmp(&first_word,&second_word);

    if (result ==0){
        printf("%s and %s are anagramms",first_word,second_word);
    }
    else {
        printf("%s and %s are not anagramms",first_word,second_word);
    }

    return 0;
}
