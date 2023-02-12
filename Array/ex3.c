/*
 * ex3.c
 *
 *  Created on: Feb 1, 2023
 *      Author: MEGA
 */


#include <stdio.h>

int main(void)
{
	int arr1[10][10];
	int arr2[10][10];
	int i,j,x,y;
	printf("enter number of rows\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("enter number of coulms\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&y);
	printf("enter the matrix\n");
	fflush(stdout); fflush(stdin);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			arr2[i][j] = arr1[j][i];
		}
	}
	printf("entered matrix \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
		fflush(stdout); fflush(stdin);
	}
	printf("transposed matrix \n");
	fflush(stdout); fflush(stdin);
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
		fflush(stdout); fflush(stdin);
	}

	return 0;

}

