#include<stdio.h>
#include<math.h>
int main(){
	
	int c1,c2,h,ang,ang2;
	
	printf("ingrese el valor del cateto 1=");
	scanf("%d",&c1);
	printf("ingrese el valor del cateto 2=");
	scanf("%d",&c2);
	printf("ingrese el valor del angulo para saber el otro=");
	scanf("%d",&ang);
	h=sqrt(pow(c1,2)+pow(c1,2));
	ang2=90-ang;
	printf("\n");
	printf("el valor del otro lado es= %d\n",h);
	printf("el valor del otro angulo es= %d",ang2);
	
	
	
	
	return 0;
	
}
