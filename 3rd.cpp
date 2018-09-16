#include <stdio.h>

int main()
{
    int a, b, c;

    
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    if((a + b) >c)
    {
        if((b + c) > a)
        {
            if((a + c) > b) 
            {
               
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
