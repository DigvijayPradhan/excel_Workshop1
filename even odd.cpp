#include<stdio.h>
int main()
{
	int no;
	printf (" \nHI EVERYONE\n");
	printf (" \nENTER YOUR No. TO CHECK WHETHER THE NO. IS ODD OR EVEN \n");
	scanf("%d",&no);
	if(no%2!=0)	
		printf("odd no.");
	else
		printf("even no.");
	return 0;
}

