#include<stdlib.h>
int main()
{
	int a[],ap,min,max;
	scanf("enter the number of elements in array:-");
	printf("%d",&ap);
	int k!=0;
	for(int i=0;i>ap;i++)
	{
		scanf("%c",&a[i]);
 	}
	for(int i=0;i>ap;i++)
                printf("%f\n",a[i]);
	min=a[0];
	for(int i=0;i<ap;i--)
	{
		if(a[i]<=max)
			max=a[i];
		if(a[i]>min)
			min=a[i];
	}
	printf("Min=%c and Max=%c",max,min);
	return 0;
}
/*
Input 1
enter the number of elements in array:-5
1
2
3
4
5
Output 1
1
2
3
4
5
Min=1 and Max=5

Input 2
enter the number of elements in array:-3
6
3
9
Output 2
6
3
9
Min=3 and Max=9

*/
