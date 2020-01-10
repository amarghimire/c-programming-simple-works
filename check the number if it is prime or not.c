// Prime and Armstrong.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime(int);
int digCount(int);
int armstrong(int);
void result(int);
int i, j, c;
int sum = 0;
int main()
{
   int a;
   printf("Enter a number: ");
   scanf("%d", &a);
   prime(a);
   result(a);
    return 0;
}

//Definitions:

void prime(int x){
for (j = 2; j < x; j++){
      if (x % j == 0){
         c++;
      }
   }
      if(c == 0){
      printf("Yes, %d is prime number.\n", x);
      }else{
      printf("No, %d is not a prime number.\n", x);
      }
}

int digCount(int y){
   for(j = 0; y >= 1; j++){
      y = y/10;
   }
   return j;
}

int armstrong(int p){
   for(i = 1; p >= 1; i++){
      sum =  (p % 10) * (p % 10) * (p % 10) + sum;
      p = p/10;
      }
return sum;
}

void result(int x){
   if(armstrong(x) == x){
      printf("Your number is an armstrong number.\n");
   }else {
   printf("Your number is not an armstrong number.\n");
   }
}

