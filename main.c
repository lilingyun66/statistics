#include<stdio.h>
#include<stdlib.h>

int main(void) {
	unsigned int items,counter;
	double average=0,variance=0;

	printf("items:");
	scanf("%d",&items);
	printf("\n");

	double *list=(double*)malloc(sizeof(double)*items);

	for(counter=0; counter<items; counter++) {
		printf("%d:",counter+1);
		scanf("%lf",&list[counter]);
	}

	for(counter=0; counter<items; counter++)average+=list[counter];
	average/=items;
	for(counter=0; counter<items; counter++)variance+=(list[counter]-average)*(list[counter]-average);
	variance/=items;

	printf("\naverage  %lf\nvariance %lf\n",average,variance);
	system("pause>nul");

	free(list);
	return 0;
}