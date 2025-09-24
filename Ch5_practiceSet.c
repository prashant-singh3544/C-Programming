#include <stdio.h>

// Problem 1: Write a program using function function to find avg. of three numbers.
/*
float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}


int main(){
    int a = 3, b=6, c=5;
    printf("The average of a, b and c is %f", average(a, b, c));
*/

    // Problem 2: Write a function to convert celcius to fah.

/*
float c2f(float);

float c2f(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %.2f", c, c2f(c));
*/    

    // Problem 3:Write a function to calculate force of attraction
    // on a body of mass 'm' exerted by earth. Consider g= 9.8m/s^2.
/*
    #include <stdio.h>


float force(float);

float force(float mass){
    return mass*9.8;
}

int main(){
    int m = 45;
    printf("The value of force is %f\n", force(m));
  */

  // Problem 4:Write a C program using recursion to calculate nth element of fibonacci series.
/*
  #include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main(){
    int n = 9;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
  */  

    // Problem 6: Write a recursive function to calculate the sum of first 'n' natual no.
  /*  #include <stdio.h>


int sum_natural(int);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    // sum_natural(n) = 1 + 2 + 3 + 4 + 5 + ... n-1 + n;
    // sum_natural(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;

}
int main(){
    printf("The sum of first 5 natural numbers is %d", sum_natural(5));
   */ 

    // Problem 7:

    #include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // This loop runs from 0 to 2
        // if i = 0 ---> print 1 star 
        // if i = 1 ---> print 3 stars 
        // if i = 2 ---> print 5 stars 
        // no_of_stars = (2*i+1)

        // This for loop prints (2*i+1) stars 
        for(int j=0; j<2*i+1;j++){
            printf("*");
        }

        // This printf prints a new line 
        printf("\n");
    }
  

    // Problem 6
    /*
    #include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4
    // 4 5 5
*/
    // Problem 7: 
    /*
    #include <stdio.h>

    int main(){
        int n = 3;
        for (int i = 0; i < n; i++)
        {
            // This loop runs from 0 to 2
            // if i = 0 ---> print 1 star 
            // if i = 1 ---> print 3 stars 
            // if i = 2 ---> print 5 stars 
            // no_of_stars = (2*i+1)
    
            // This for loop prints (2*i+1) stars 
            for(int j=0; j<2*i+1;j++){
                printf("*");
            }
    
            // This printf prints a new line 
            printf("\n");
        }
            */
        
        return 0;
    }
