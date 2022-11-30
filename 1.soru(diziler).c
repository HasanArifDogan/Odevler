#include<stdio.h>

float ortalamaBul(int dizi[]){
float top=0;
float ort;
    for(int k=0;k<5;k++){
      top+=dizi[k];
        ort=top/5;
        
    }
return ort;
}
//##################################
int main()
{
    int dizi[5];
    for(int i=0;i<5;i++){
    printf("deger gir:\n");
    scanf("%d",&dizi[i]);
    }
   
    float ort=ortalamaBul(dizi);
    printf("%f",ort);
    
    return 0;
}    