#include<stdio.h>
int viz;
int fin;
float son;

int ort(int vize,int final){
float sonuc=0;
sonuc=vize*0.6+final*0.4;
return sonuc;
}

int main()
{

    do{ 
    
    son=0;
    viz=0;
    fin=0;
    
    printf("vize ve final notu: \n");
    scanf("%d%d",&viz,&fin);
    
    son=ort(viz,fin);
    printf("ortalamanız: %f\n",son);
    
    if(85<=son){
    printf("Harf notu: AA\n");
    }
    else if(70<=son){
    printf("Harf notu: AB\n");
    }
    else if(55<=son){
    printf("Harf notu: BB\n");
    }
    else if(40<=son){
    printf("Harf notu: BC\n");
    }
    else if(25<=son){
    printf("Harf notu: CC\n");
    }
    else{
    printf("Harf notu: FF\n");
    }
      
    }while(viz!=111);
    
      
    if(viz==111){
    printf("Yukardaki son degeri ciddiye almayınız \n");
    }
         
    return 0;
}