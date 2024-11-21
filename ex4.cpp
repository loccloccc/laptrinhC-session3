#include<stdio.h>

int main ()
{
	float toan , van , anh , tong , trungBinhcong ;
	printf("\nMoi nhap diem toan : ");
	scanf("%f",&toan);
	printf("\nMoi nhap diem van : ");
	scanf("%f",&van);
	printf("\nMoi nhap diem anh : ");
	scanf("%f", &anh);
	tong = toan + van + anh ;
	printf("\ntong diem 3 mon la : %.2f " , tong);
	trungBinhcong = tong / 3 ;
	printf("\nDiem trung binh 3 mon la : %.2f " , trungBinhcong);
	
	
}
