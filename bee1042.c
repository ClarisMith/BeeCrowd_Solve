#include<stdio.h>
int main(){
    int i, a[3],b[3],temp;
    for(i = 0;i<3;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    int min=a[0];
    for(i=0;i<3;i++){
        if(min>a[i]){
            min=a[i];
            
        }

    }


}