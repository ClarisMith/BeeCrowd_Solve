#include<stdio.h>
int main(){
    int c1,n1,c2,n2;
    float p1,p2;
    scanf("%d%d%f%d%d%f",&c1,&n1,&p1,&c2,&n2,&p2);
    float v=(n1*p1)+(n2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",v);
}