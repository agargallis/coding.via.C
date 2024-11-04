#include <stdio.h>//THE 'stdio.h' LIBRARY PROVIDES A VARIETY OF FUNCTIONS FOR INPUT, OUTPUT AND FILE HANDLING (NOTE) 
#include <stdbool.h>//THE 'stdloob.h' USE BOOLIAN NUMBERS AND EXPRESSIONS LIKE [1] (NOTE)

//ΤΕΣΤΑΡΙΣΜΑ ΕΡΓΑΣΙΑΣ 0 - HOMEWORK 0 TESTING

int main(){

        long long int x;//X IS TAKING PRICES BETWEEN [-9.223.372.036.854.775.807 to 9.223.372.036.854.775.807]/[-10^18 to 10^18] (NOTE) 
        long long int y;//Y IS TAKING PRICES BETWEEN [-9.223.372.036.854.775.807 to 9.223.372.036.854.775.807]/[-10^18 to 10^18] (NOTE)
	long long int CostLeft;//FUNCTION SCANF RETURNS 1 -> TRUE, IF THE INTEGER IS VALID, SO IN REAL CASE, INTEGER COSTRIGHT HAS VALUE 1. OTHERWISE IT HAS VALUE DIFFERENT FROM 1 -> FALSE (NOTE)
        long long int CostRight;//FUNCTION SCANF RETURNS 1 -> TRUE, IF THE INTEGER IS VALID, SO IN REAL CASE, INTEGER COSTRIGHT HAS VALUE 1. OTHERWISE IT HAS VALUE DIFFERENT FROM 1 -> FALSE (NOTE)


        do{

        printf("Please enter the cost of left direction :    "); //ASK USER TO GIVE THE COST OF THE LEFT DIRECTION (NOTE)
        CostLeft=scanf("%lld", &x); //THE FIRST COST THAT THE USER WROTE (NOTE)

        //CHECKING IF LEFT COST IS VALID NUMBER (NOTE)
        if(CostLeft==false){ //IF SCANF==COSTLEFT RETURNS FALSE SITUATION LIKE STRING OR CHARACTER, INSTEAD OF AN INTEGER [1] (NOTE)

            printf("No right cost provided.\n");//IT RETURNS INVALID INPUT IF THE FUNCTION RETURNS SOMETHING DIFFERENT FROM 1 LIKE CHARACTERS, STRINGS (NOTE)
            return 1;
         }

	    else if(CostLeft==EOF){ //IF USER WANTS TO EXIT AND WANTS TO PRESS CONTROL+D, WE MUST RETURN TO HIM THE VALUE 0 (NOTE)
		
	        printf("Terminating.\n");
            return 0;
        }
        
        else if (x>1000000000000000000 || x<-1000000000000000000){

            printf("No right cost provided."); //IT RETURNS INVALID INPUT IF NUMBER EXCEEDS THE LIMIT OF A LONG LONG SIGNED INTEGER (NOTE)
            return 1; //RETURN 1 IF SOMETHING WILL GO WRONG (NOTE)
        }


        printf("Please enter the cost of right direction :   "); //ASK USER TO GIVE THE COST OF THE RIGHT DIRECTION (NOTE)
        CostRight=scanf("%lld", &y); //THE SECOND COST THAT THE USER WROTE (NOTE)

        //CHECKING IF RIGHT COST IS VALID NUMBER (NOTE)
        if(CostRight==false){ //IF SCANF==COSTRIGHT RETURNS FALSE SITUATION LIKE STRING OR CHARACTER, INSTEAD OF AN INTEGER [1] (NOTE)

            printf("No right cost provided.\n"); //IT RETURNS INVALID INPUT IF THE FUNCTION RETURNS SOMETHING DIFFERENT FROM 1 LIKE CHARACTERS, STRINGS (NOTE)
            return 1;
         }

	    else if(CostRight==EOF){ //IF USER WANTS TO EXIT AND WANTS TO PRESS CONTROL+D, WE MUST RETURN TO HIM THE VALUE 0 (NOTE)
		
   	        printf("Terminating.\n");
            return 0;
        }

        else if (y>1000000000000000000 || y<-1000000000000000000){
        
            printf("No right cost provided."); //IT RETURNS INVALID INPUT IF NUMBER EXCEEDS THE LIMIT OF A LONG LONG SIGNED INTEGER (NOTE)
            return 1; //RETURN 1 IF SOMETHING WILL GO WRONG (NOTE)
        }
        

        //CHECKING AND COMPARING COSTS ACCORDING TO THEIR VALUES (NOTE)  
        if(x==y){
        printf("Go left!\n");
        }

        else if(x>y){
        printf("Go right!\n");
        }

        else if(y>x){
        printf("Go left!\n");
        }

        }while(1); //WHILE ALL CONDITIONS ARE TRUE==1 WITH DIFFERENT MEANINGS (NOTE)

    
        return 0; //RETURN 0 IF ALL WILL GO RIGHT (NOTE)
}
