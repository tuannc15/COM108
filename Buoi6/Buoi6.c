#include <stdio.h>
#include <stdlib.h>

#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	//Khai bao chuoi va khoi tao
//	char s1[10] ={'F','P','O','L', 'Y', ' ', 'H', 'N', '\0'};
//	char s2[20]="Fpoly Ha noi";
//	
//	char s3[] = {'F','P','O','L', 'Y', ' ', 'H', 'N', '\0'};
//	char s4[] = "Fpoly Ha noi";	// T? d?ng thêm ‘\0’
//	//in 2 chuoi ra man hinh
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//	printf("%s\n", s3);
//	printf("%s\n", s4);
//	
//	puts(s1);
//	puts(s2);
//	printf("\7");
	
//	char monhoc1[50];
//	printf("Nhap mot chuoi: ");
//	scanf("%s", monhoc1);
//	printf("Chuoi nhan duoc la: %s", monhoc1);
//	
//	char monhoc2[50];
//	printf("Nhap mot chuoi: ");
//	gets(monhoc2);
//	printf("Chuoi nhan duoc la: %s", monhoc2);
	
//	//Do dai chuoi bang kich thuoc mang tru 1
//	char ch[20] = {'F','P','O','L', 'Y', ' ', 'H', 'N', '\0'};
//    printf("Do dai chuoi: %d",strlen(ch));

//	//Copy chuoi
//	char source[20] = {'F','P','O','L', 'Y', ' ', 'H', 'N', '\0'};
// 	char target[20];
//	strcpy(target, source);
//	printf("Chuoi source: %s\n", source);
//	printf("Chuoi target: %s\n", target);

////Cong chuoi (3 chuoi)
//			char  ch [10] = { 'H' ,  'e' ,  'l' ,  'l' ,  'o' ,  '\0' };
//			char  ch1 [10] = { ' ' ,  '\0' };
//    		char  ch2 [10] = { 'C' ,  '\0' };
//    		strcat (ch, ch1);
//    		strcat (ch, ch2);
//    		printf ( "Chuoi sau khi da ket noi la: %s", ch);
    		
    //Nh?p t? bàn phím h? và tên, mã s? sinh viên,
	//xu?t ra h? và tên n?i v?i chu?i mã s? sv
	
//	//Khai bao bien
//	char hoVaTen[50];
//	char maSV[7];
//	printf("Nhap ho va ten: ");
//	gets(hoVaTen);
//	printf("\n");
//	
//	printf("Nhap ma sinh vien: ");
//	gets(maSV);
//	printf("\n");
//	//Viet dau nhay vi ham strcat ghep 2 chuoi voi nhau
//	strcat (hoVaTen, " ");
//	strcat (hoVaTen, maSV);
//	
//	printf("%s", hoVaTen);
	

////So sanh chuoi
//	char str1[20], str2[20];    
//  		printf("Nhap chuoi 1: ");
//  		gets(str1); 
//  		printf("Nhap chuoi 2: ");
//  		gets(str2);
//	  	if (strcmp(str1, str2) == 0) {
//	      		printf("2 chuoi bang nhau.");
//	  	} else if (strcmp(str1, str2) > 0) {
//	      		printf("Chuoi 1 lon hon chuoi 2");
//	  	} else {
//	      		printf("Chuoi 1 nho hon chuoi 2");
//	  	}
////Dao chuoi
//char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap: %s", str);
//  		printf("\nChuoi dao nguoc: %s", strrev(str));
//  		
//  		//Chuyen chu hoa thanh chu thuong
//  		char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap la: %s",str);
//  		printf("\nChuoi chu thuong la: %s",strlwr(str));
  		
//  		//Chuyen chu thuong thanh chu hoa
//  		char str[20];
//  		printf("Nhap chuoi: ");
//  		gets(str);
//  		printf("Chuoi da nhap la: %s",str);
//  		printf("\nChuoi chu HOA la: %s",strupr(str));
  		
  		//Tim chuoi con
  		char str1[30] = "Learning a C is awesome";
		char str2[15] = "CPP";
		if(strstr(str1, str2)!=NULL)
			printf("tim thay");
		else 
			printf("khong tim thay");

	return 0;
}
