#include<stdio.h>
int main()
{
int i,k;
char str[20];
printf("\nEnter the string");
scanf("%s",str);
printf("\nEnter the limit:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",str[i]);
}
return 0;
}
