/*
 * ex4.c
 *
 *  Created on: Feb 2, 2023
 *      Author: MEGA
 */

#include <stdio.h>

int main(void)
{
	int arr[100];
	int i,n,x,y;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter your numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to insert\n");
	scanf("%d",&x);
	printf("enter location\n");
	scanf("%d",&y);
	n+=1;
	y-=1;
	for(i=n;i>y;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[y]=x;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}


