#include <stdio.h>
#include <stdlib.h>

int main () {
     float num1, num2;

     printf ("entre le premier nombre : ");
     scanf ("%f",&num1);

     printf ("entre le deuxieme nombre : ");
     scanf ("%f",&num2);

     float somme;
     somme = num1+num2;

     float idn;
     idn= (num1+num2)*3;

     if (num1 == num2){
        printf ("deux nombres identiques alors le resultat est %f",idn);
     }
     else {
        printf ("le resultat est %f",somme);
     }

    return 0;
}
