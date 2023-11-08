#include<stdio.h>
#include<math.h>
int main(){
	const float PI=3.14;
	float r=5;
	float area=PI*pow(r,2);
	float perimeter=2*PI*r;
	printf("Hinh tron co dien tich la: %.1f va chu vi: %.1f",area,perimeter);
}	
