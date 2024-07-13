#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double tri=0.5*a*c;
    double cir=3.14159*c*c;
    double trap=((a+b)/2)*c;
    double sqr=b*b;
    double rec=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,trap,sqr,rec);
    }