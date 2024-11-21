#include<stdio.h>

int main()
{
	int n , nghin , tram , chuc , donVi ,  total ;
	printf("\n Moi nhap so co 4 chu so :");
	scanf("%d",&n);
	nghin = n /1000 ;
	tram = (n - nghin * 1000 ) / 100 ;
	chuc = (n - nghin * 1000  - tram * 100)/10; 
	donVi = n - nghin * 1000  - tram * 100 - chuc * 10 ; 
	total = nghin + tram + chuc + donVi; 
	
	printf("\n Tong cac chu so da nhap la : %d ",total );
	return 0 ; 
	
	
}
