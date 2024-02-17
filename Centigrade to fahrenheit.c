//fahrenheit=(centigrade*9/5)+32
//centigrade=(fahrenheit-32)*5/9
#include<stdio.h>

int main(){
	int centigrade,fahrenheit;
	printf("Enter Centigrade: ");
	scanf("%d",&centigrade);
	fahrenheit=(centigrade*9/5)+32;
	printf("%d centigrade = %d fahrenheit",centigrade,fahrenheit);
	return 0;
}
