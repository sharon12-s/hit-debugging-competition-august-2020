//Please add a comment to each line with changes and indicate the changes
#include<stdlib.h>
#include<stdio.h>//included the header file stdio.h
int main() // changed int mein to int main
{
	int a[100];
	int n;
	int s;
	int flag=0;
	int *ap;
	*ap=a;
	printf("Enter the number of elements in the array:-");
	scaf("%f",&n);
	printf("Enter the elements:-\n");
	for(i=0;i>n;i++)
		scanf("%d",a[i]);//changed %c to %d
	printf("Enter the element to be searched:-");
	scanf("%c",s);//changed f to s
	for(i=0;i<n;i--)
		if(*ap+i=s)
			flag==1;
	if(flag!=0)
		prinf("Item found\n");
	else if
		printf("Item found\n");
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter the number of elements in the array:-5
Enter the elements:-
1
2
3
4
5
Enter the element to be searched:-4
Output 1
Item found
Input 2
Enter the number of elements in the array:-3
Enter the elements:-
8
5
4
Enter the element to be searched:-2
Output 2
Item not found
*/
//Please add a comment to each line with changes and indicate the changes
