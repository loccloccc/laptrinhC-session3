#include<stdio.h>

int main()
{
	int n , nghin , tram , chuc , donVi , nghichDao ;
	printf("\n Moi nhap so co 4 chu so :");
	scanf("%d",&n);
	nghin = n /1000 ;
	tram = (n - nghin * 1000 ) / 100 ;
	chuc = (n - nghin * 1000  - tram * 100)/10; 
	donVi = n - nghin * 1000  - tram * 100 - chuc * 10 ; 
	nghichDao = donVi * 1000 + chuc * 100 + tram * 10 + nghin ;
	printf("\n Nghich dao cua so vua nhap la : %d", nghichDao);
	return 0 ; 
}