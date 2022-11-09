#include <stdio.h> 

int main( ){

float ales=0;
float yds=0;
float mezun=0;
float ort =0;

printf("ales notunuzu giriniz:");
scanf("%f", &ales);

printf("yds notunuzu giriniz:");
scanf("%f", &yds);

printf("mezuniyet notunuzu giriniz:");
scanf("%f", &mezun);

ales = ales/2;
yds = yds/4;
mezun = mezun/4;

ort = (ales+yds+mezun);
printf("%f %f %f %f\n", ales, yds, mezun,ort);

if (ort<=60){
printf("ortalama yetmedi, kaldınız");
}

else if(ales*2 < 70){
        printf("ales puanı yetmedi, kaldınız");
    }

else {
    printf("%.2f ortalama ve %.2f mezuniyet puanı ile geçtiniz. ", ort, mezun*4);
}

return 0;
}