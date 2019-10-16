#include<stdio.h>

int main()

{

int  rez;

printf("1-Belarus, 2- Russia, 3-Spain, 4-Ukrain, 5-Latvia, 6-France, 7-Poland \n");
printf ( "Enter country name: ");

scanf("%d",&rez);

switch (rez)

{
case 1: printf("Minsk"); break;
case 2: printf("Moskow"); break;
case 3: printf("Madrid"); break;
case 4: printf("Kiev"); break;
case 5: printf("Riga"); break;
case 6: printf("Paris"); break;
case 7: printf("Warsaw"); break;

}

}
