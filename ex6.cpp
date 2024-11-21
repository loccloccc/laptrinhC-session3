#include<stdio.h>

int main()
{
	float canh_tam_giac , chieu_cao , dienTich;
	printf("\nMoi nhap do dai canh tam giac :");
	scanf("%f",&canh_tam_giac);
	printf("\nMoi nhap chieu cao tan giac :");
	scanf("%f",&chieu_cao);
	dienTich = 0.5 * canh_tam_giac * chieu_cao ;
	printf("\nDien tich tam giac la : %.1f", dienTich);
}
