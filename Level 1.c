//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h> // changed to stdio.h
char main()
{	char a,b,c;
 int mx,mi;// declared mx and mi as integers
	scanf("%c%c%c",&a,&b,&c);// %f changed to %c
	printf("\t%s\t%s\t%s",a,b,c);
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		if(b>a) 
		{
			mx=b;
            	if(a>c) 
				mi=c;
			else 
				mi=a;// transferred to the next line
		}
	}
	else//Please add a comment to each lines that has changes and Indicate the changes
	{
		mx=c;
		if(a>b) 
			mi=b;
		else 
			mi=a;
	}
	scanf("Largest is %d and smallest is %d",mx,mi);// changed %d to %f and changed positions of mx and mi
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases

Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3

Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
