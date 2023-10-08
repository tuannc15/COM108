#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tinhChuVi1();
void tinhChuVi2(int dai, int rong);
int tinhChuVi3();
int tinhChuVi4(int dai, int rong);

int main(int argc, char *argv[]) {
	//tinhChuVi1();
	//tinhChuVi2(40, 20);

	//	int cv;
	//	cv=tinhChuVi3();
	//	printf("Chu vi: %d", cv);
	
	int dai, rong , cv4;
	//Nhap chieu dai
	printf("Chieu dai: ");
	scanf("%d", &dai);
	
	//Nhap chieu rong
	printf("Chieu rong: ");
	scanf("%d",&rong);
	
	cv4=tinhChuVi4(dai,rong);
	
	printf("Chu vi: %d", cv4);
	
	getch();
	
	return 0;
}

void tinhChuVi1(){
	int dai, rong ,chuVi;
	//Nhap chieu dai
	printf("Chieu dai: ");
	scanf("%d", &dai);
	
	//Nhap chieu rong
	printf("Chieu rong: ");
	scanf("%d",&rong);
	
	chuVi=(dai+rong)*2;
	printf("Chu vi: %d", chuVi); 
	
}

void tinhChuVi2(int dai, int rong){
	int chuVi;

	chuVi=(dai+rong)*2;
	printf("Chu vi: %d", chuVi); 	

}

int tinhChuVi3(){
	int dai, rong ,chuVi;
	//Nhap chieu dai
	printf("Chieu dai: ");
	scanf("%d", &dai);
	
	//Nhap chieu rong
	printf("Chieu rong: ");
	scanf("%d",&rong);
	chuVi=(dai+rong)*2;
	
	return chuVi;
	
}

int tinhChuVi4(int dai, int rong){
	int chuVi;
	chuVi=(dai+rong)*2;
	
	return chuVi;
	
}
