#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int y=a/365;
    int m=(a%365)/30;
    int d=(a%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

}