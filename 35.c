#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],transpose[10][10],r,c,i,j,k;
	system("cls");
	printf("enter the number of row=");
	scanf("%d",&r);
	printf("enter the number of column=");
	scanf("%d",&c);
	printf("enter the first matrix element=\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
  	printf("\nEntered matrix: \n");
  	for (i=0;i<r;++i)
  	for (j=0;j<c;++j) 
  {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  for (i=0;i<r;++i)
  for (j=0;j<c;++j) 
  {
    transpose[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (i=0;i<c;++i)
  for (j=0;j<r;++j) 
  {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
