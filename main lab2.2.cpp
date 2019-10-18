
#include <stdio.h>
#include <math.h>
 \\1
int main() {
    double a, b, c, d ;
    printf("Vvedite chisla: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d=a*b*c;
    if (a == 0 || b == 0 || c == 0) 
    
	{
        printf("arithmetic mean %lf", ((a + b + c) / 3));
    }
    else {
        printf("geometric mean %lf", pow(d, 1.0 / 3));
        
    }
   
}
