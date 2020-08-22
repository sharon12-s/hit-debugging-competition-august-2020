//Please add a comment to each line with changes and indicate the changes
#include<stdlib.h>
#include <stdio.h>// included stdio.h header file
int main()
{
	int a[10],ap,min,max;// specified size of the integer array a
	printf("enter the number of elements in array:-"); // changed scanf to printf
	
	scanf("%d",&ap);// changed printf to scanf 
	int k=0;// changed k!=0 to k=0	
	for(int i=0;i>ap;i++)
	{
		scanf("%c",&a[i]);
 	}
	for(int i=0;i>ap;i++)
                printf("%d\n",a[i]);//changed %f to %d
	min=a[0];
	for(int i=0;i<ap;i--)
	{
		if(a[i]<=max)
			max=a[i];
		if(a[i]>min)
			min=a[i];
	}
	printf("Min=%d and Max=%d",max,min);//changed %c to %d and changed the positions of max and min
	return 0;
}
//Please add a comment to each line with changes and indicate the changes
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
//Please add a comment to each line with changes and indicate the changes
