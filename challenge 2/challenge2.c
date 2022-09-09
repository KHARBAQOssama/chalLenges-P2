#include<stdio.h>

int main (){
    char letter;

    printf(" entrer votre lettre : " );
    scanf ("%c",&letter);

    switch(letter){
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
        printf(" Votre letter est voyelle");
        break;
        default:
            printf("votre letter n'est pas voyelle");

    }

    return 0;
}
