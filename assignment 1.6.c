#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000];
    printf("Enter your name here:\n");
    scanf("%[^\n]s",name);
    printf("\"Hello , %s\"\n",name);
    return 0;
}
