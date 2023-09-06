#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int dizi[10]={0,2,4,5,3,1,7,9,6,8};
	int i,toplam=0;
	for(i=0;i<10;i++){
	if(dizi[i]%2==0){
		toplam=toplam+dizi[i];
		
	}	
	
	}
	printf("dizideki cift elemanlarin toplami:%d",toplam);
	return 0;
}
