      //           This is a program to print natural numbers and sum, count digits and fibonacci series using recursion.
#include <stdio.h>
#include <stdlib.h>

// Functions declarations:

int natural(int, int);
int naturalSum(int, int);
int digitCount(int);
float fSeries(int, int, int);

// Global Variables:
int count = 0;
//                                              London Callings:

int main()
{
   int a, b, c;
    printf("Enter the interval: ");
    scanf("%d%d", &a, &b);
    natural(a, b);
    printf("\nSum is %d.", naturalSum(a, b));
    printf("\nEnter your number: ");
    scanf("%d", &c);
    printf(" Number of digit is %d\n", digitCount(c));
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    fSeries(0, 1, terms);
    return 0;
}

//Definitions:

//naturals:
int natural(int x, int y){
if (x == y){
   printf("%d", y);
   return y;
}
printf("%d ", x);
if(x < y)
   return natural(x+1, y);
else
   return natural(x-1, y);
}

// Sum of naturals :

int naturalSum(int x, int y){
if (x == y){
   return x;
}
return x + naturalSum(x+1, y);
}

//counting digits.
int digitCount(int x){
if(x > 0 && x < 10){
   return 1;
}
return 1 + digitCount(x/10);
}

//Fibonacci series:
float fSeries(int x, int y, int z){
  count++;
if(z == count){
      printf("%d", x+y);
   return z;
}
printf("%d ", x + y);
return x + y + fSeries(x+y, x, z);
}

//                                                 Good Job !!!
