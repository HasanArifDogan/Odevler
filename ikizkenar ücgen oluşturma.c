#include <stdio.h>
int main(){
    
int i,k;
int satir;
int kare=1;
int bos;

printf("satır sayisini yaziniz: ");
scanf("%d",&satir);
bos=satir-1;

for(i=0;i<satir;i++){
    for(k=0;k<bos;k++){
    printf(" ");
}
    for(k=0;k<kare;k++){
        printf("#");     
    }
    printf("\n");
    kare+=2;
    bos--;
}

return 0;
}


/*
ooox
ooxxx
oxxxxx
xxxxxxx

a
aaa
aaaaa
*/



