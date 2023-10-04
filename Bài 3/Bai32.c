#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float diem;
	printf("Nhap diem: ");
   	scanf("%f", &diem);
   	//Xep loai hoc luc
   	if (diem>= 9) {
            printf("Xuat sac");
        } 
	else if (diem>= 8) {
		printf("Gioi");
	} else if (diem>= 7) {
		printf("Kha");
	}else if (diem>= 5) {
		printf("Trung binh");
	}else if (diem>= 3) {
		printf("Yeu");
	}else {
		printf("Kem");
	}
   
	return 0;
}
