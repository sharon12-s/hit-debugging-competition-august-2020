//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>
#include<string.h>// changed to string.h
int main()
//Please add a comment to each line with changes and indicate the changes
{
	int a[100],b;
	char c,i=0;//changed char  c=a to char c
	printf("Enter a string ");
	scanf("%d",a);//changed %c to %d
	printf("Enter a character to count ");
        scanf("%d",&c);//changed &b to &c
	printf("%d\n",b);
	for(i=0;i<strsize(a);i++)
		if(a[i]==b)
			c--;
	printf("\nThe number of occurrences of %d is %c",b,c);
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter a string hello
Enter a character to count l
Output 1
l

The number of occurrences of l is 2

Input 2
Enter a string Mississippi
Enter a character to count s
Output 2
s

The number of occurrences of s is 
*/
//Please add a comment to each line with changes and indicate the changes
