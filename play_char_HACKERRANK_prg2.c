#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,word[60],line[100];
    scanf("%c",&c);
    scanf("%s",word);
    scanf("\n");
    scanf("%[^\n]%*c",line);
    printf("%c\n",c);
    printf("%s\n",word);
    printf("%s\n",line);
    
}