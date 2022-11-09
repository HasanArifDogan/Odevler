#include <stdio.h>
int main(int argc, char *argv[])
{
int i,k;
int satir;
int kare=1;

printf("satır sayisini yaziniz: ");
scanf("%d",&satir);

for(i=0;i<satir;i++){
    for(k=0;k<kare;k++){
        printf("#");     
    }
    printf("\n");
    kare++;
}
return 0;
}