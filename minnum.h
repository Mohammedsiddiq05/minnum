#include<stdio.h>
int main()
{
int a,b,c;
printf("\nenter the valu:");
scanf("%d",&a);
printf("\nenter the valu:");
scanf("%d",&b);
printf("\nenter the valu:");
scanf("%d",&c);
if(a<b&&a<c)
printf("\nmin mum is:%d",a);
else if(b<a&&b<c)
printf("\nmin mum is:%d",b);
if(c<a&&c<b)
printf("\nmin mum is:%d",c);
else
printf("\n");
return 0;
}
