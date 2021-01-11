#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void quickSort(int *,int, int);

int main(){
    int *array,i,size;
    printf("Dizinin boyutunu giriniz: "); scanf("%d",&size);
    array=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("Dizinin %d. elemani :",i+1); scanf("%d",&array[i]);
    }
    printf("Dizinin baslangic durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    quickSort(array,0,size-1);
    printf("\n\nDizinin son durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    getch();
    return 0;
}

void quickSort(int *dizi,int ilk,int son){
    int i; 
    int j; 
    int pivot; 
    int gecici; 
    pivot=ilk; 
   
  
    if(son>ilk){
        pivot=ilk;
        i=ilk;
        j=son;
        while (i<j){
            while (dizi[i]<=dizi[pivot] && i<son && j>i){ 
                i++;
            }
            while (dizi[j]>=dizi[pivot] && j>=ilk && j>=i){
                j--;
            }
            if (j>i){ 
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
        
        gecici=dizi[j];
        dizi[j]=dizi[pivot];
        dizi[pivot]=gecici;
        quickSort(dizi,ilk,j-1);
        quickSort(dizi,j+1,son);
    }
}
