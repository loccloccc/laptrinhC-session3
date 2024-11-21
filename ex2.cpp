#include<stdio.h>

int main()
{
	float  do_C;
	printf("Moi ban nhap do C :");
	scanf("%f",&do_C);
	float do_F = do_C * 1.8 + 32;
	printf("\n chuyen doi nhiet do tu do Celsius sang do Fahrenheit %f " , do_F);
	return 0 ;	
} 
