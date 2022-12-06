#include<stdio.h>

float ortalamaBul(int a[]){ //ORTALAMAYI DÖNDÜRÜR 
    float top=0;
    float ort;
    
    for(int k=0;k<5;k++){
        top+=a[k];
        ort=top/5;   
    }
return ort;
}
//######################################
int kacKez(int a[]){ //DİZİDE BIR DEGERİN KAÇ KEZ GEÇTİĞİNİ DÖNDÜRÜR 
    int deger=0;
    int sayac;
    printf("Dizide kac kez geçtigini öğrenmek istediginiz sayı: ");
    scanf("%d",&deger);
    for(int l=0;l<5;l++){
        if(a[l]==deger){
           sayac++;
        }
}
return sayac;
}
//######################################
int maxEleman(int a[]){ //DİZİDE MAX DEGERİ DÖNDÜRÜR 
    int max=a[0];
    for(int i=0;i<5;i++){
        if (max<a[i]){
            max=a[i];
        }
    }
return max;
}
//######################################
int minEleman(int a[]){ //DİZİDE MİN DEĞERİ DÖNDÜR 
    int min=a[0];
    for(int i=0;i<5;i++){
        if ((min>a[i])==0){
        }else{
            min=a[i];
        }    
    }
return min;
}
//######################################
int ikinciMax(int a[]){  //DİZİDE MAX 2NCI DEGERİ DÖNDÜRÜR 
    int max=a[0];
    int ikincimax=a[0];
    for(int i=0;i<5;i++){
        if (max<a[i]){
            ikincimax=max;
            max=a[i];
        }
        else if(ikincimax<a[i] && a[i]<max){
            ikincimax=a[i];
        }
    }    
return ikincimax;
}
//#######################################
int ortdanBuyuk(int a[],int orta){ //DIZIDE ORTALAMADAN BUYUK DEGERLERIN SAYISINI DÖNDÜRÜR 
    int sayi=0;
    for(int i=0;i<5;i++){
        if(a[i]>orta){
            sayi++;
        }   
    }
return sayi;
}
//#######################################
int ortdanKucuk(int a[],int orta){ //DIZIDE ORTALAMADAN KUCUK DEGERLERIN SAYISINI DÖNDÜRÜR 
    int sayi2=0;
    for(int i=0;i<5;i++){
        if(a[i]<orta){
            sayi2++;
        }
    }
return sayi2;
}
//#######################################
int paraBuyuk(int a[]){  //GIRILEN DEGERDEN DAHA BUYUK DEGERLERIN TOPLAMINI DÖNDÜRÜR 
    int parmtrBuyuk;
    int toplam=0;
    printf("dizideki parametrelerden buyuk sayilarin toplami icin deger: \n");
    scanf("%d",&parmtrBuyuk);
    for(int i=0;i<5;i++){
        if(a[i]>parmtrBuyuk){
            toplam+=a[i];
        }
    }
return toplam;
}
//########################################
int paraBuyukOrt(int a[]){ //GIRILEN DEGERDEN DAHA BUYUK DEGERLERIN ORTALAMASINI DÖNDÜRÜR 
    int parmtrBuyuk;
    float toplam=0;
    printf("dizideki parametrelerden buyuk sayilarin ortalamasi icin deger: \n");
    scanf("%d",&parmtrBuyuk);
    for(int i=0;i<5;i++){
        if(a[i]>parmtrBuyuk){
            toplam+=a[i];
        }
    }
return toplam/5;
}
//########################################
int main()
{
    int dizi[5];
        for(int i=0;i<5;i++){
            printf("deger gir:\n");
            scanf("%d",&dizi[i]);
        } 
   
    float ortalama=ortalamaBul(dizi);
    int kackezGecti=kacKez(dizi); 
    int maxDeger=maxEleman(dizi);
    int minDeger=minEleman(dizi);
    int ikiMax=ikinciMax(dizi);
    int ortBuyuk=ortdanBuyuk(dizi,ortalama);
    int ortKucuk=ortdanKucuk(dizi,ortalama);
    int pBuyukTop=paraBuyuk(dizi);
    float pBuyukOrt=paraBuyukOrt(dizi);
    
    printf("ortalama: %f\n",ortalama);
    printf("bu kadar gecti: %d\n",kackezGecti);
    printf("max deger: %d\n",maxDeger);
    printf("min deger: %d\n",minDeger);
    printf("ikinci max deger:%d\n",ikiMax);
    printf("ortalamadan buyuk olan degerlerin sayisi: %d\n",ortBuyuk);
    printf("ortalamadan kucuk olan degerlerin sayisi: %d\n",ortKucuk);
    printf("yazilan degerden buyuk sayilarin toplami: %d\n",pBuyukTop);
    printf("Girilen parametreden Buyuk degerlerin ortalamasi: %.2f\n",pBuyukOrt);
    return 0;
}    