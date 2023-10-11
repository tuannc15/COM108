#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[10]={'F', 'P', 'O', 'L','Y', ' ', 'F', '\0'};
	char s2[10]="FLOPY F";
	char monhoc[50]="Lap trinh C";
	printf("%s", monhoc);
	printf("\n");
		
	puts(monhoc);
	printf("\n");
	
	//Nhap chuoi

	//Chi nhan cac ke tu tu ban phim d?n khi g?p ký t? kho?ng tr?ng ho?c ký t? xu?ng dòng.
	//Chu?i nh?n du?c không bao g?m ký t? kho?ng tr?ng và xu?ng dòng.

//	printf("Nhap mot chuoi: ");
//	scanf("%s", monhoc);
//	printf("Chuoi nhan duoc la: %s", monhoc);
//    printf("\n");
    
    
    
//	printf("Nhap mot chuoi: ");
//	gets(monhoc);
//	printf("Chuoi nhan duoc la: %s", monhoc);
//	printf("\n");
//	//Do dai chuoi
//	printf("%d\n", strlen(monhoc));
	
//	char source[20] = {'f', 'p', 'o', 'l', 'y', ' ' ,'h', 'c', 'm', '\0'};
// 	char target[20];
//	strcpy(target, source);
//	printf("Chuoi target: %s", target);

//	char  ch [10] = { 'H' ,  'e' ,  'l' ,  'l' ,  'o' ,  '\0' };
//    char  ch2 [10] = { ' ', 'C' ,  '\0' };
// 	strcat (ch, ch2);
//    printf ( "Chuoi sau khi da ket noi la: %s", ch);

	char str1[20], str2[20];    
  		printf("Nhap chuoi 1: ");
  		gets(str1); 
  		printf("Nhap chuoi 2: ");
  		gets(str2);
	  	if (strcmp(str1, str2) == 0) {
	      		printf("2 chuoi bang nhau.");
	  	} else if (strcmp(str1, str2) > 0) {
	      		printf("Chuoi 1 lon hon chuoi 2");
	  	} else {
	      		printf("Chuoi 1 nho hon chuoi 2");
	  	}

//	char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap: %s", str);
//  		printf("\nChuoi dao nguoc: %s", strrev(str));	
	
	
//	char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap la: %s",str);
//  		printf("\nChuoi chu thuong la: %s",strlwr(str));

//char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap la: %s",str);
//  		printf("\nChuoi chu HOA la: %s",strupr(str));

//char str1[30] = "Learning a C is awesome";
//		char str2[15] = "C";
//		if(strstr(str1, str2)!=NULL)
//			printf("tim thay");
//			else 
//			printf("khong tim thay");
//			
	return 0;
}
