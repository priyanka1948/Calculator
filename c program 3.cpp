/* This is a program to find out maximum out of given numbers */
# include<stdio.h>
int main(void){
	int n,a[100],i,max;
	printf("give number of values to be compared : ");
	scanf("%d",&n);
	for (i=0;i<n;i=i+1){
		printf("give value of %dth number : ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for (i=0;i<n;i=i+1){
		if (a[i]>max){
			max=a[i];
		}
	}
	printf("the maximum value is %d",max);
	return 0;
} 
