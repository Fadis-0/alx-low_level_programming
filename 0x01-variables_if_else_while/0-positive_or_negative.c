#include <stdlib.h> 
#include <time.h> 
 

/** 
 * main : assigns a random number to n on every
 * execution, and prints it followed by
 * wether it is positive, negative, or a zero
 */

int main(void) 
{ 
  int n; 
  
  srand(time(0)); 
  n = rand() - RAND_MAX / 2; 

  if (n > 0) 
    printf("%d is positive\n", n); 
  else if (n == 0) 
    printf("%d is zero\n", n); 
  else if (n < 0) 
    printf("%d is negative\n", n);
  
  return (0); 
}
