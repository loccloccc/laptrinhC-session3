#include<stdio.h>

int main()
{
	int numb1=10;
	int numb2=18;
	int tong = numb1 + numb2;
	int hieu = numb1 - numb2;
	int tich = numb1 * numb2;
	float thuong  =(float)numb1 / (float)numb2;
	printf("tong 2 so %d va %d la : %d \n",numb1,numb2,tong);
	printf("hieu 2 so %d va %d la : %d \n",numb1,numb2,hieu);
	printf("tich 2 so %d va %d la : %d \n",numb1,numb2,tich);
	printf("thuong 2 so %d va %d la : %f \n",numb1,numb2,thuong);
	return 0 ; 
	
}
