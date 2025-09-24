#include <stdio.h>

int main()
{
    // Problem 1: what will be the output of this program.
    /*
    int a = 10;
    if (a = 11)
        printf("I am 11"); 
    else
        printf("I am not 11"); 
*/

// Problem 2: Write a C prog to determine whether a stu. os passed or failed. To pass, he requires
//            a total of 40% and at least 33% in each sub. Assume there are 3 sub. and take input from user.
/*
int marks1, marks2, marks3;
// int value_of_harrys_marks;
// int value_of_rohans_marks;
// printf("%d",value_of_harrys_marks )
printf("Enter marks1: \n");
scanf("%d", &marks1);
printf("Enter marks2: \n");
scanf("%d", &marks2);
printf("Enter marks3: \n");
scanf("%d", &marks3);
printf("The marks are %d %d and %d\n", marks1, marks2, marks3);

if(marks1<33 || marks2<33 || marks3<33){
    printf("You are failed due to less marks in individual subject(s)\n"); 
}
else if((marks1 + marks2 + marks3)/3 <40){
    printf("You are failed due less percentage\n"); 
}
else{
    printf("You are passed!");
}   */
    

    // Problem 3:Calculate the income tax
/*
    int income;
    float tax=0; 
    printf("Enter income: \n");
    scanf("%d", &income);
    if(income<=250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income- 500000);
    }
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000- 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.3f", tax);
*/

    //Problem 4: Write a C program to find whether a year entered by the user is leap year on not.
   /*
    int year; 
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0) || year %400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
        */

        // Problem 5: Write a C prog. to determine whether a character entered by the user is lowercase or not.
      /*
            char ch = 'A';
            printf("The character is %c\n", ch);
            printf("The value of character is %d\n", ch);
            // 97, 122
            if(ch >= 97 && ch<=122){
                printf("This character is lowercase\n");
            }
            else{
                 printf("This character not lowecase \n");
            }
             */   

                 // Problem 6: Write a C prog to find greatest of four numbers entered by the user,
                 

                
                    int a=400, b=209, c=116, d=32;
                    if(a>b && a>c && a>d){
                        printf("The greatest of all is %d", a);
                    }
                    else if(b>a && b>c && b>d){
                        printf("The greatest of all is %d", b);
                    }
                    else if(c>a && c>b && c>d){
                        printf("The greatest of all is %d", c);
                    }
                    else if(d>a && d>c && d>b){
                        printf("The greatest of all is %d", d);
                    }   
    return 0;
}

