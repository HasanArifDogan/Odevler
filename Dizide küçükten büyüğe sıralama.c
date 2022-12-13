#include<stdio.h>
void sira(int x[])
{
    int i,k;
    int temp;
    int deg=x[0];
    for(i=0;i<4;i++){
        for(k=i+1;k<5;k++){
            if(x[k]<x[i])
            {
            temp=x[i];
            x[i]=x[k];
            x[k]=temp;
            }
        }
    } 
    for(int j=0;j<5;j++){
        printf("%d",x[j]);
    }
}


int main()
{
    int a[5]={0};
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sira(a);
    return 0;
}