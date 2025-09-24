#include <stdio.h>

int main(){

    //Problem 1: Write a C prog. to print the multiplication table of given no. n.
    /*
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
    */

    // Problem 2: Print multip. table in reverse order.
    
    /*
    int n;
    scanf ("%d", &n);
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
      */

        // Problem 5: Write a C prgram to sum first ten natural number using while loop.
      /*  
        int i = 1;
    int sum = 0;
    while(i<=10){
        sum +=i;    // it means: [Sum = sum+i]
        i++;
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    */

    // Problem 6: Repeat Problem 5 using for and do while loop.
    /*

     // USING DO WHILE LOOP:
    // int i = 1;
    // int sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // } while (i <= 10);

    // USING FOR LOOP:
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("The sum of first 10 natural numbers is %d", sum);
    */

    // Problem 7: Write a C prog. to calculate the sum of the numbers occuring in the multiplication table of 8.
   /*
    int sum=0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8*i);
    }
    printf("The sum of the table of 8 is %d", sum);
    */

    // Problem 8: Write a program to calculate the factorial of a given number using a for loop.
/*
        // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int product=1;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        product *=i;
    }
    printf("The factorial is %d", product);
    */

    // Problem 9: Repeat 8 using while loop.
/*
     // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int i = 1;
    int product=1;
    int n = 5;
    while(i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
*/

// Problem 10: Write a program to check whether a given number is prime or not using while loop.
/*
int n = 7;
int not_prime = 0;

if (n == 0 || n == 1)
{
    not_prime = 1;
}
else
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2)
        {
            not_prime = 1;
            break;
        }
    }
}
if (not_prime)
{
    printf("%d is not prime\n", n);
}
else
{
    printf("%d is prime\n", n);
}
*/

// Problem 11: Repeat 10 using other type of loop.
/*
int n = 3;
int not_prime = 0;

if (n == 0 || n == 1)
{
    not_prime = 1;
}
else
{
    int i =2;
    // while (i < n)
    // {
    //     if (n % i == 0 && n != 2)
    //     {
    //         not_prime = 1;
    //         break;
    //     }
    //     i++;
    // }

    do{
        if (n % i == 0 && n != 2)
        {
            not_prime = 1;
            break;
        }
        i++;
    }while (i < n);
}
if (not_prime)
{
    printf("%d is not prime\n", n);
}
else
{
    printf("%d is prime\n", n);
}
    */

    return 0;
}