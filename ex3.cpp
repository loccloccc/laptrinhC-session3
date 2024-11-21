#include<stdio.h>

int main()
{
	float R , chuVi , dienTich , Pi ;
	Pi = 3.14 ; 
	printf("Moi ban nhap ban kinh hinh tron :");
	scanf("%f", &R);
	chuVi = 2 * Pi * R ;
	dienTich = 2 * Pi * R * R ;
	printf("\n Chu vi hinh tron la : %.2f " , chuVi);
	printf("\n Dien tich  hinh tron la : %.2f " , dienTich);
	
}
