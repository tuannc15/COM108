#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sinhvien {
    int MaSV;
    char ten[50];
    float diem;
};
	
struct student {
    int id;
    char name[10];
};

struct Date1 {
    int ngay;
    int thang;
    int nam;
};
struct sinhvien1 {
    int MaSV;
    char ten[20];
    struct Date1 ngaysinh;
} SinhVien1;

//Nhung
struct sinhvien2 {
    int MaSV;
    char ten[20];
    struct Date2 {
        int ngay;
        int thang;
        int nam;
    } ngaysinh;
} SinhVien2;

	
int main(int argc, char *argv[]) {

	struct sinhvien sv1, sv2;
	sv1.MaSV=1;
	strcpy(sv1.ten, "Nguyen Chi Pheo"); 
	sv1.diem=7.5;

	printf("MaSV = %d, Ten = %s, Diem = %f\n" ,sv1.MaSV, sv1.ten, sv1.diem);
	
	
//	int i;
//    struct student st[5];
//    printf("Nhap thong tin cho 5 sinh vien: \n");
//    for (i = 0; i < 5; i++) {
//        printf("Nhap id: ");
//        scanf("%d", &st[i].id);
//        printf("Nhap name: ");
//        scanf("%s", &st[i].name);
//    }
//    printf("Danh sach sinh vien: \n");
//    for (i = 0; i < 5; i++) {
//        printf("Id: %d, Name: %s\n", st[i].id, st[i].name);
//    }
    
//Struct long
    SinhVien1.MaSV = 101;
    strcpy(SinhVien1.ten, "Phong Tran"); // chuy?n d?i chu?i thành m?ng char
    SinhVien1.ngaysinh.ngay = 10;
    SinhVien1.ngaysinh.thang = 11;
    SinhVien1.ngaysinh.nam = 1998;
 	printf("Hien thi thong tin sinh vien su dung struct long nhau\n");
    // hi?n th? thông tin sinh viên ra màn hình
    printf("Ma so sinh vien: %d\n", SinhVien1.MaSV);
    printf("Ten sinh vien: %s\n", SinhVien1.ten);
    printf("Ngay sinh (dd/mm/yyyy): %d/%d/%d\n", SinhVien1.ngaysinh.ngay,SinhVien1.ngaysinh.thang,SinhVien1.ngaysinh.nam);


//Struct long nhung
    SinhVien2.MaSV = 101;
    strcpy(SinhVien2.ten, "Nguyen Van An"); // chuy?n d?i chu?i thành m?ng char
    SinhVien2.ngaysinh.ngay = 31;
    SinhVien2.ngaysinh.thang = 12;
    SinhVien2.ngaysinh.nam = 2004;
 	printf("Hien thi thong tin sinh vien su dung struct long nhau nhung\n");
    // hi?n th? thông tin sinh viên ra màn hình
    printf("Ma so sinh vien: %d\n", SinhVien2.MaSV);
    printf("Ten sinh vien: %s\n", SinhVien2.ten);
    printf("Ngay sinh (dd/mm/yyyy): %d/%d/%d\n", SinhVien2.ngaysinh.ngay,SinhVien2.ngaysinh.thang,SinhVien2.ngaysinh.nam);



	return 0;
}
