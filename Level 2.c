//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int rnain()
{
 	char a,b;
 	scanf("%f",&b);
 	b=a%10;
	a=a/10;
 	while(a==0)
 	{
  		b=b+10*(a%10);
  		a=a/10;
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%c",b);
 	return 0;
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321

Input 2
5667
Output 2
7665
*/



