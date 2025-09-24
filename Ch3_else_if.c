#include <stdio.h>

int main(){
    int age = 45;

    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    } 
    else if(age>78){
        printf("You can drive");
    }
    else{                    // this is optional and it will only execute if all the conditions fail.
        printf("You cannot drive");
    }


    return 0;
}