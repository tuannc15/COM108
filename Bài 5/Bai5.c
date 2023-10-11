#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1 = 10; 
	//int a[n1];
  //  int a[n1]={0,1,2,3,4,5,6,7,8,9};
	int a1[10] = {5,8,22,1,7,6,11,25,33,9};

	const int n2 = 5; 
//	int b[n2]={0,1,2,3,4};


		#define n1 10
		#define n2 4
		#define n3 3
		int a2[n1]={0,1,2,3,4,5,6,7,8,9};		// ? int a2[10];
		int b2[n1][n2];	// ? int b2[10][20];//m?ng 2 chi?u
	
	///
	
	#define MAX 4
	typedef int MangSo[MAX];
	MangSo d = {1, 2, 3, 5};

	//b = a;			// Sai
	int j=0;
	for (int j = 1; j < 3; j++) {
        printf("hello %d\n", j);
    }
	
//	for (int i = 0; i < 4 ; i++) {
//		d[i] = e[i];
//	}
//			// Ðúng


	return 0;
}
