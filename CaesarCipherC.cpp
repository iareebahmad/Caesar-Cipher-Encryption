#include<stdio.h>
main()
{
	int i;
	int shift;
	char string[100]="0";
	
	printf("Welcome to Caeser Cipher Encryption\n");
	printf("Kindly enter the string to be encrypted : \n");
	scanf("%s",string);
	
	printf("Kindly enter the number of shifts in the code\n");
	scanf("%d",&shift);
	
		for(i=0;i<100;i++)
			{
				string[i]=string[i]+shift;
			}
			
			
	printf("The encrypted string is : %s \n",string);

}
