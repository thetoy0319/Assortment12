//4. Write C program  to perform diagonal sum of 2D array.

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int a[n][n],i,j,sum=0;
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			printf("Enter Elements [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		sum += a[j][n-j-1];
	}
	printf("%d\n",sum);
	
	return 0;
}
