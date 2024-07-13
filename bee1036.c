#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(b*b)-(4*a*c);
   if(p<0||p==0 || a==0 || b==0 || c==0){
        printf("Impossivel calcular\n");
    }
    else{
         double pr= sqrt(p);
         float x1=(-b+pr)/(2*a);
         float x2=(-b-pr)/(2*a);
         printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }
    

   
}