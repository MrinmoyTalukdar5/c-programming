#include<stdio.h>
int main()
{
 char alpha;
    printf("enter a alphabet \n");
    scanf("%c", &alpha);
    if (alpha=='a','e','i','o','u')
    {
        printf("vowel");
    }
    else 
    {
        printf("consonent");
    }
return 0;
}