//Q02. Write a C program to check whether a given number is even or odd.

#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n%2==0){
		printf("The number is even\n");
	}
	else printf("The number is odd\n");
	
	return 0;
	
}
