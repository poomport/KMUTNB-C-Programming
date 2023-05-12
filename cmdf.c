#include<stdio.h>
#include<stdlib.h>
int main(int argc , char* argv[])

{   

    printf("----------- ARITH PROGRAM -----------\n");
    
    if(argc !=4){
    printf(" ERROR,Value amouunt exceeded.\n");
    printf(" You must provide necessary 4 arguments only even through pass.\n \n");
    printf(" Usage : %s <NUM1><A/S/M/D><NUM2>\n",argv[0]);
    printf(" --------------- What variable ---------------------\n");
    printf(" Num1 is an integer first number from keyboard.\n");
    printf(" Num2 is an integer second number from keyboard.\n");
    printf(" Be careful,input variable you must use 'Capital leter'.\n");
    printf(" OPERATOR CODE--------------------------\n");
    printf(" A = Command mark Addition or +.\n");
    printf(" S = Command mark Subtraction or -.\n");
    printf(" M = Command mark Multiply or x.\n");
    printf(" D = Command mark Divide or /.\n");
    
    return 1; 
    }

    double NUM1,resultadd,resultsub,resultmul,resultdiv;
    int    NUM2;
    char   OPERATOR;
    
    NUM1 = atof(argv[1]);
    NUM2 = atoi(argv[3]);
    /*
    OPERATOR = argv[2];  // ERROR.
    */
    OPERATOR = *argv[2]; // setting OPERATOR = *argv[2]; because it show value data .
                         
    switch(OPERATOR){
    case 'A':
    printf("You select Addition.\n");
    resultadd = NUM1 + NUM2;
    printf("Addition (%lf,%d) : %lf + %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultadd);
    break;
    case 'S':
    printf("You select Subtraction.\n");
    resultsub = NUM1 - NUM2;
    printf("Subtract (%lf,%d) : %lf - %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultsub);
    break;
    case 'M':
    printf("You select Multiply.\n");
    resultmul = NUM1 * NUM2;
    printf("Multiply (%lf,%d) : %lf * %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultmul);
    break;
    case 'D':
    printf("You select Divide.\n");
    resultdiv = NUM1 / NUM2;
    printf("Divide   (%lf,%d) : %lf / %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultdiv);
    break;
    default:
    printf("ERROR,please try again.\n");
    printf(" Be careful,input variable you must use 'Capital leter'.\n");
    printf("You must enter select charator command mark A , S , M , D :\n");
    }

    //the same above
    /*if(OPERATOR == 'A'){
    printf("You select Addition.\n");
    resultadd = NUM1 + NUM2;
    printf("Addition (%lf,%d) : %lf + %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultadd);
    }
    else if(OPERATOR == 'S'){
    printf("You select Subtraction.\n");
    resultsub = NUM1 - NUM2;
    printf("Subtract (%lf,%d) : %lf - %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultsub);
    }
    else if(OPERATOR == 'M'){
    printf("You select Multiply.\n");
    resultmul = NUM1 * NUM2;
    printf("Multiply (%lf,%d) : %lf * %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultmul);
    }
    else if(OPERATOR == 'D'){
    resultdiv = NUM1 / NUM2;
    printf("Divide   (%lf,%d) : %lf / %d  = %lf \n",NUM1,NUM2,NUM1,NUM2,resultdiv);
    }
    else {
    printf("ERROR,please try again.\n");
    printf(" Be careful,input variable you must use 'Capital leter'.\n");
    printf("You must enter select charator command mark A , S , M , D :\n");
    }
    */

    printf("---------------------------------------------------------\n");
    printf("Thank you for use MY ARITH PROGRAM.\n");
    

    return 0;
}