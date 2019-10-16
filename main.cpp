#include<stdio.h>

int main()
{
int a,b,c ;
printf ("Enter a=");
scanf("%f",&a);
printf ("Enter b=");
scanf("%f",&b);
printf("Enter c=");
scanf("%f",&c);
if(a==b||b==c||c==a) printf("Pare is present");
else printf("No pare");
return 0;
}
