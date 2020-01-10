#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void add();
void sub();
void mult();
void divi();
void menu();
int c, d;

int main()
{
    menu();
    return 0;
}

void menu(){
   system("cls");
    printf("\n\n\n\t\t\t===========================================================================\n");
    printf("\t\t\t\t\t\tThings You Can Do Here\n");
    printf("\t\t\t===========================================================================\n");
    printf("\t\t\t1. Addition");
    printf("\t\t\t\t\t\t2. Subtraction\n");
    printf("\t\t\t3. Multiplication");
    printf("\t\t\t\t\t4. Division\n");
    printf("\t\t\t5. Exit\n");
    printf("\t\t\t===========================================================================\n");
    // Question-->
    int option;
    printf("\t\t\tWhat do you want to do from the options above:\n\t\t\t");
    scanf("%d", &option);
    printf("\t\t\t===========================================================================\n");
switch(option){
case 1:
   add();
   break;
case 2:
   sub();
   break;
case 3:
   mult();
   break;
case 4:
   divi();
   break;
case 5:
   printf("\t\t\t\t\t     Thanks for using the software!!!\n");
   printf("\t\t\t===========================================================================\n");
   exit(0);
   break;
default:
   printf("\t\t\tInvalid Input\n\t\t\t");
   printf("===========================================================================\n\t\t\t");
   getch();
   menu();
}
}

//Add
void add(){
int a, b;
printf("\t\t\tEnter any two numbers:\n\t\t\t");
scanf("%d%d", &a, &b);
printf("\t\t\t===========================================================================\n");
printf("\t\t\tSum is %d.\n\t\t\t", a + b);
printf("===========================================================================\n\t\t\t");
getch();
menu();
}

void sub(){

   int a, b;
printf("\t\t\tEnter any two numbers:\n\t\t\t");
scanf("%d%d", &a, &b);
printf("\t\t\t===========================================================================\n");
printf("\t\t\tSubtracted number is %d.\n\t\t\t", a - b);
printf("===========================================================================\n\t\t\t");
getch();
menu();
}

void mult(){
printf("\t\t\tEnter any two numbers:\n\t\t\t");
scanf("%d%d", &c, &d);
printf("\t\t\t===========================================================================\n");
printf("\t\t\tMultiplied number is %d.\n\t\t\t", c * d);
printf("===========================================================================\n\t\t\t");
getch();
menu();
}

void divi(){
printf("\t\t\tEnter any two numbers:\n\t\t\t");
scanf("%d%d", &c, &d);
printf("\t\t\t===========================================================================\n");
printf("\t\t\tDivided number is %d.\n\t\t\t", c / d);
printf("===========================AMAR RAJ GHIMIRE================================================\n\t\t\t");
getch();
menu();
}
