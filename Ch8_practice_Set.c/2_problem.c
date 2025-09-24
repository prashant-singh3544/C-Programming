#include <stdio.h>

int main(){
    char str[6];
    // scanf("%s", str);
    for (int i = 0; i < 8; i++)
    {
        scanf("%c", &str[i]); 
        flush(stdin);
    }
    str[5] = '\0';
    
    printf("%s", str);
    return 0;
}