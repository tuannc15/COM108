#include <iostream>
using namespace std;

void VuaGaVuaCho();
int TimSoNT(int n);

void VuaGaVuaCho(){
	
	cout << "Vua ga vua cho.\n";
	cout << "Bo lai cho tron.\n";
	cout << "Ba muoi sau con.\n";
	cout << "Mot tram chan chan.\n";
}

int TimSoNT(int n){
    //flag = 0 => khong phai so nguyen to
    //flag = 1 => s? nguyên t?
    
    int flag = 1;

    if (n <2) return flag = 0; /*S? nh? hon 2 không ph?i s? nguyên t? => tr? v? 0*/
    
    /*S? d?ng vòng l?p while d? ki?m tra có t?n t?i u?c s? nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Ch? c?n tìm th?y 1 u?c s? là d? và thoát vòng l?p*/
        }
        i++;
    }

    return flag;
}

