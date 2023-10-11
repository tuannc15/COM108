#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	int a[10],x;
 	int i=0;
 	
	for(i = 0; i < 10; i++) {   
		//nh?p giá tr? vào m?ng	
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &a[i]); 

	}
	for (i = 0; i < 10; i++) { 
		//hi?n th? giá tr? m?ng	
		printf("%d, ", a[i]); 
	}
	printf("Nhap phan tu can tim x = ");
	scanf("%d", &x); 
	
	bool kq = false; 
	
	for( i = 0; i < 10; i++){ 
		if(x == a[i]) { 
			printf("%d co trong mang", x);
			kq = true;
			break; 
		} 
	}
	
	if (!kq)
		printf("%d khong co trong mang", x);
	
	return 0;
}
