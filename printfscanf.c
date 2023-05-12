#include <stdio.h>
// include <stdio.h>

int main()  // Heading
{ // Function Body
  int x; // Variable Declaration
  float y,Sum1,Sum2,Sum3,Sum4; // Variable Declaration
  printf("Enter  x:"); // To get interger number from keyboard
  scanf("%d",&x); 
  printf("Enter  y:"); // To get interger number from keyboard
  scanf("%f",&y); 

  Sum1 = x+y;
  Sum2 = x-y;
  Sum3 = x*y;
  Sum4 = x/y;

  printf("%d+%f=%f\n",x,y,Sum1);
  printf("%d-%f=%f\n",x,y,Sum2);
  printf("%d*%f=%f\n",x,y,Sum3);
  printf("%d/%f=%.2f\n",x,y,Sum4);

  // return EXIT_SUCCESS;
return 0; // Return with no problem
}