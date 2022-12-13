#include<stdio.h>

float ort(x[])
{
return x[0]*0.4+x[1]*0.6;
}



int main()
{
   int o1[2]={0};
   int o2[2]={0};
   int o3[2]={0};
   int o4[2]={0};
   int o5[2]={0};
    
    printf("1.ogrnci vize, final: \n");
    scanf("%d%d",&o1[0],&o1[1]);
    
    printf("2.ogrnci vize, final: \n");
    scanf("%d%d",&o2[0],&o2[1]);
    
    printf("3.ogrnci vize, final: \n");
    scanf("%d%d",&o3[0],&o3[1]);
    
    printf("4.ogrnci vize, final: \n");
    scanf("%d%d",&o4[0],&o4[1]);
    
    printf("5.ogrnci vize, final: \n");
    scanf("%d%d",&o5[0],&o5[1]);
    
    
    printf("1.ogrencinin vize notu:%d, final notu:%d, ortalaması:%f\n",o1[0],o1[1],ort(o1));
    printf("2.ogrencinin vize notu:%d, final notu:%d, ortalaması:%f\n",o2[0],o2[1],ort(o2));
    printf("3.ogrencinin vize notu:%d, final notu:%d, ortalaması:%f\n",o3[0],o3[1],ort(o3));   
    printf("4.ogrencinin vize notu:%d, final notu:%d, ortalaması:%f\n",o4[0],o4[1],ort(o4));    
    printf("5.ogrencinin vize notu:%d, final notu:%d, ortalaması:%f\n",o5[0],o5[1],ort(o5));
    
    return 0;
}