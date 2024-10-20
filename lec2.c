#include <stdio.h>
#include <stdint.h>

//ΕΞΟΙΚΙΩΣΗ ΜΕ ΣΥΝΑΡΤΗΣΗ ΚΑΙ ΥΠΟΛΟΓΙΣΜΟΣ ΒΑΘΜΟΛΟΓΙΑΣ - GET ACCUSTOMED WITH FUNCTION AND ESTIMATION OF GRADES


//1ST WAY (NOTE)

int grades(int final_exam, int hw, int lab) {

    int result=final_exam*0.5 + hw*0.3 + lab*0.2;
    printf("Your grade is %d", result);

}

int grades(int final_exam, int hw, int lab);
int main(){

    grades(70,80,100);
    return 0;

}



//2ND WAY
/*
int grades(int final_exam, int hw, int lab) {

    return final_exam*0.5 + hw*0.3 + lab*0.2;

}


int main(){

    int g = grades(70,80,100);
    printf("Your grade is %d", g);
    return 0;

}
*/


//3RD WAY (ITS WORKS WITH INPUTS FROM THE USER)

// The grade function computes the final grade
// for first year students according to
// https://progintro.github.io
/*
int grade(int final_exam, int homework, int lab){
  return final_exam*50/100+homework*30/100+lab*20/100;
}

int main(int argc, char ** argv) {
  if (argc != 4) {
	printf("Run as: grade final_exam homework lab\n");
	return 1;
  }
  int final_exam = atoi(argv[1]);
  int homework = atoi(argv[2]);
  int lab = atoi(argv[3]);
  int final_grade = grade(final_exam, homework, lab);
  printf("My grade is: %d\n", final_grade);
  return 0;
}
*/
