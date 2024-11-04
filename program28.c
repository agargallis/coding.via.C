#include <stdio.h>

//ΕΞΟΙΚΙΩΣΗ ΜΕ ΛΟΥΠΕΣ ΓΟΡ ΚΑΙ ΓΟΥΑΙΛ - GET ACCUSTOMED WITH WHILE AND FOR LOOPS

int main(){

    int i;
    int sum=0;
    int j=0;

    for(i=0; i<1; i++)
    printf("Hello World\n");

    //for(;;) ->INFINITIVE LOOP (NOTE)

    while(j<42){

        sum+=j;
        j++;

    }

    printf("%d %d\n", j, sum);
    
    return 0;
}