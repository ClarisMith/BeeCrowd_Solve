
#include <stdio.h> 
int main()  
{   char n[100];
    double s,a; 
    scanf(" %s %lf %lf",&n,&s,&a);
    double salary=s+(0.15*a);
    printf("TOTAL = R$ %.2lf\n",salary);
    
}