//5. Write C Program to perform Column-wise sum of 2D array.

#include<stdio.h>

int main(){

	int n;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int a[n][n],i,j,sum;
	
	for(i=0; i<n; i++){
	 for(j=0; j<n; j++){
		printf("Enter number[%d][%d] :",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<n;j++){
			sum += a[j][i];
		}
		printf("\n");
		printf("Column Sum = %d\n",sum); 
	}

	return 0;
}
