#include <stdio.h>
// include <stdio.h>

int main() // Heading
{
    int score; // Variable Declaration
    
    printf("Please enter your score:"); // To get interger number from keyboard
    scanf("%d",&score); // Ampersand = %
   
    if (score < 50) { // if student get score < 50 get F ;
    printf("You are FAIL.\n");
    printf("My student got straight F.\n "); 
    printf("You should try hardder.\n ");
    printf("Good luck in next time!!!\n"); }
    
    else if (score < 60) { // if student get score 60<=50 get D ;
    printf("You are Pass.\n");
    printf("My student got straight D.\n "); 
    printf("You are a good student.\n"); 
    printf("Good luck!!!\n"); }
    
    else if (score  < 70 ) { // if student get score 70<=60 get C ;
    printf("You are Pass.\n");
    printf("My student got straight C.\n "); 
    printf("You are a very good student.\n"); 
    printf("Good luck!!!\n");}
    
    else if (score  < 80) { // if student get score 80<=70 get B ;
    printf("You are Pass.\n");
    printf("My student got straight B.\n "); 
    printf("You are a great student.\n"); 
    printf("Good luck!!!\n");}
    
    else if (score > 100) {// if student get score >= 100 get Error ;
    printf("Error.My student please try again.\n");}

    else { // if student get score 80>=100 get A ;
    printf("You are Pass.\n");
    printf("My student got straight A.\n "); 
    printf("Perfect Congratulations.\n"); 
    printf("Good luck!!!\n");}

    // return EXIT_SUCCESS;
    return 0 ; // Return with no problem
}