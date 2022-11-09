#include <stdio.h>

int main(){
    
float kilo, boy, indx=0;

printf("kilonuzu giriniz(0kg):");
scanf("%f", &kilo);

printf("boyunuzu giriniz(0.00m):");
scanf("%f", &boy); 

indx = kilo/(boy*boy);

printf("vucut kitle indexiniz:%.2f\n", indx)   ;
    
if(indx<=18.5){
    printf("zayıf");
}

if(18.5<indx and indx<=24.9){
    printf("normal");
} 

if(25<=indx and indx<=29.9){
    printf("kilolu");
}

if(30<=indx and indx<=34.9){
    printf("obez");
}
  
if(indx>=35){
    printf("super obez");
}
      
        
    return 0;
}