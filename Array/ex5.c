/*
 * ex5.c
 *
 *  Created on: Feb 2, 2023
 *      Author: MEGA
 */
 #include <stdio.h>
 
 int main(void)
 {
	int arr[100];
	int i,size,postion,num,x;
	printf("enter number of elements\n");
	scanf("%d",&size);
	printf("enter your numbers\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("enter number to search \n");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			x=i+1;
			break;
		}
		else 
		{
			x=0;
		}
	}
	if(x!=0)
	{
		printf("number found at location %d \n",x);
	}
	else
	{
		printf("number not found\n");
	}
	 
	 return 0;
	 
 }


