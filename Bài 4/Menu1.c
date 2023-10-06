#include <stdio.h>
#include <stdlib.h>

#include<stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Menu();		// Ham nay se xuat ra cac danh sach menu
int ChonMenu();		// Ham nay dung de chon 1 menu tuong ung
void XuLyMenu();	// Xu ly menu ung voi menu duoc chon

int main(int argc, char *argv[]) {
	Menu();
	while (true)
	{	
		XuLyMenu();
	}
	return 0;
}

void Menu() {
	printf("=================MENU================\n");
	printf( "1. Vua ga - vua cho\n");
	printf( "2. Kiem tra so nguyen to\n");
	printf( "3. Tong cac so nguyen to\n");
	printf( "4. Dao nguoc so\n");
	printf( "5. Tim so sao cho a*b = 2(a+b)\n");
	printf( "6. Tinh giai thua cua mot so\n");
	printf( "7. Tim day Fibonaci\n");
	printf( "8. Hoan vi\n");
	printf( "9. Ve tam giac\n");
	printf( "10. Bai tap cua cac ban\n");
	printf( "99. Thoat!!!\n");
	printf( "=====================================\n");
}

int ChonMenu()
{
	int n = 0;
	printf("\n\nMoi chon menu: ");
	scanf("%d",&n);
	if (n > 0 || n < 99)
		return n;
	else return ChonMenu();
}

void XuLyMenu() 
{
	int chon = ChonMenu();
	int a = 5; int b = 6;
	switch (chon)
	{
	case 1:		
		printf("1. Vua ga vua cho.\n");
		//VuaGaVuaCho();
		break;
	case 2:
		printf("2. Kiem tra so nguyen to\n");
	//	cout << TimSoNT(5);
		break;
	case 3:
		printf("3. Tong cac so nguyen to\n");
	//	cout << TinhTongCacSoNT(11);
		break;
	case 4:
		printf("4. Dao nguoc so\n");
	//	cout << DaoNguocSo(123);
		break;
	case 5:
		printf("5. Tim so sao cho a*b = 2(a+b)\n");
	//	TimSoTichABBang2TongAB(100);
		break;
	case 6:
		printf("6. Tinh gia thua cua mot so\n");
	//	cout << TinhGiaiThua(6);
		break;
	case 7:
		printf("7. Tim day Fibonaci\n");
//		for (int i = 0; i < 5; i++)
//		{
//			cout << Finbonaci(i) << "\t";
//		}
//		Finbonaci2(7);
		break;
	case 8:
		printf("8. Hoan vi\n");
		//int a = 5; int b = 6;
//		HoanVi(a, b);
//		cout << a << "\t" << b;
		break;
	case 9:
		printf("9. Ve hinh tam giac\n");
	//	VeHinhTamGiac(4, 5);
		break;
	case 10:
		printf("10. Bai tap cua cac ban\n");
	//	VeHinhTamGiac(4, 5);
		break;
	case 99:
		printf("Thoat!!!\n");
		exit(1);
		break;
	}
}
