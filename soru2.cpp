#include <stdio.h>

#define MAX_SIZE 10000

int main() {
	int sayilar[MAX_SIZE], y[MAX_SIZE], x[MAX_SIZE];
    int swap, size1, size2; 
    
    printf("Dizi Boyutu Girin");
    scanf("%d", &size1);
    printf("Dizi Elemanlarý Giriniz\n");
    for(int i =0; i < size1; i++){
    	scanf("%d", &x[i]);
	}
	printf("Dizi Boyutu Girin");
    scanf("%d", &size2);
    printf("Dizi Elemanlarý Giriniz\n");
    for(int i =0; i < size2; i++){
    	scanf("%d", &y[i]);
	}
	
	int yeniSize = size1 + size2;
	
	for(int i =0; i<=size1; i++){
		sayilar[i]=x[i];
	}
	for (int i = 0, j = size1; i < size2; i++, j++) {
        sayilar[j] = y[i];
    }

	for(int i = 1; i <yeniSize; i++){
		for(int j = 0; j <yeniSize-i; j++){
			if(sayilar[j]>sayilar[j+1]){
			swap = sayilar[j];
			sayilar[j] = sayilar[j + 1];
			sayilar[j + 1] = swap;
		}
	  }
	}
	printf("Sýralama:\n");
	for(int i = 0; i <yeniSize; i++){
		printf("%d\n", sayilar[i]);
	}
}
   









/*
 int dizi1[MAX_SIZE], dizi2[MAX_SIZE], yeniDizi[MAX_SIZE*2];
    int size1, size2, YeniSize;
    int swap;

    printf("1. dizi boyutunu girin: ");
    scanf("%d", &size1);

    printf("1. dizinin elemanlarýný girin:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &dizi1[i]);
    }

    printf("2. dizi boyutunu girin: ");
    scanf("%d", &size2);

    printf("2. dizinin elemanlarýný girin:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &dizi2[i]);
    }

     YeniSize = size1 + size2;

    for (int i = 0; i < 1;size i++) {
         yeniDizi[i] = dizi1[i];
    }

    for (int i = 0, j = size1; i < size2; i++, j++) {
        yeniDizi[j] = dizi2[i];
    }

    for (int i=0; i<10; i++){
  	for(int j=0; j<5-i; j++){
  		if( yeniDizi[j]> yeniDizi[j +1 ]){
  			swap =  yeniDizi[j];
  			yeniDizi[j]= yeniDizi[j+1];
  		    yeniDizi[j + 1] = swap;
		  }
	  }
  }
  printf("sýralanýþ:\n");
  for(int i = 0; i <=YeniSize; i++){
  printf("%d-",  yeniDizi[i]);
  }

    return 0;*/
