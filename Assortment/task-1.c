//1. Write C program to print all negative elements in an array.

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("Enter Elements [%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	
	return 0;
}

