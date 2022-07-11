#include<stdio.h>
#include<string.h>
int main()
{
    char count[1000];
    printf("Enter the string:\n");
    scanf("%s",count);
    printf("Length of string is %ld\n",strlen(count));
    return 0;
}
