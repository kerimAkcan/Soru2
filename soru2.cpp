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
   










