#include <stdio.h>
#define MAX_ITEMS 200

int main(void){
	unsigned int i,j;
	double a[MAX_ITEMS];
	double sum=0,variance=0,average;
	printf("项数(最大%d):",MAX_ITEMS);
	scanf("%d",&i);
	for(j=0;j<i;j++)scanf("%lf",&a[j]);
	for(j=0;j<i;j++)sum+=a[j];
	average=sum/i;
	for(j=0;j<i;j++)variance+=(a[j]-average)*(a[j]-average);
	printf("平均数:%lf\n",average);
	printf("方差:  %lf\n",variance);
	system("pause");
	return 0;
}
