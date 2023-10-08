#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hoanDoi1(int a, int b);
void hoanDoi2(int *a, int *b);

int main(int argc, char *argv[]) {
	int a=100;
	int b=200;
	//
	printf("Truoc hoan doi, gia tri cua a: %d\n", a);
	printf("Truoc hoan doi, gia tri cua b: %d\n", b);
	//Goi ham theo gia tri
	hoanDoi1(a, b);
	
	printf("Truoc hoan doi, gia tri cua a: %d\n", a);
	printf("Truoc hoan doi, gia tri cua b: %d\n", b);
	//Goi ham theo tham chieu
	hoanDoi2(&a, &b);
	
	printf("Truoc hoan doi, gia tri cua a: %d\n", a);
	printf("Truoc hoan doi, gia tri cua b: %d\n", b);
		
	return 0;
}

void hoanDoi1(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void hoanDoi2(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
