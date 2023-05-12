#include <stdio.h> //#include <stdio.h> 
int main () // Heading
{   int number,x; // Variable Declaration
    
    do{
    
    printf("Please enter your number:"); // To get interger number from keyboard
    scanf("%d",&number); // Ampersand = %  
    if (number < 2) {printf("Error\n"); break;}
    else if (number < 100) printf("Correct\n"); 
    else printf(" Corect\n");

    printf("Multiplication Table\n"); 
    printf("---------------------\n");
    for ( x = 1; x <= 12; x++){ 
    printf("%3d * %3d = %3d\n",number,x,number*x); }
    
    }while (number>=2&&number<=100);

    return 0; // return with no problem
}