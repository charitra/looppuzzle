# include <stdio.h>
# define BOOLEAN int
# define FALSE 0
# define TRUE 1
# define MAX 15

BOOLEAN isValidSoln(int[], int[], int);

int main()
{
  int problem[MAX][MAX], soln[MAX*MAX], userSoln[MAX*MAX];
	int size,i,j;

	do {
		printf("Enter the size");
		scanf("%d", &size);
	} while ((size < 0) || (size > MAX));


	printf("Enter the grid values, enter -1 to indicate blank cell\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			scanf("%d", &problem[i][j]);
		}
	}
	
	printf("Enter solutions as no of lines of cell as value\n");
	printf("i.e if a cell contains 3 lines as part of route then the value is 3\n");

	for (i = 0; i < size*size; i++)
	{
		scanf("%d", &soln[i]);
	}

	printf("Enter user soln\n");
	for (i = 0; i < size*size; i++)
	{
		scanf("%d", &userSoln[i]);
	}

	if (isValidSoln(soln, userSoln, size))
		printf("Solved Succussfully!\n");
	else
		printf("Solution is incorrect\n");

	return 0;
}

BOOLEAN isValidSoln(int soln[], int userSoln[], int size)
{
	int i;
	BOOLEAN flag=TRUE;

	for(i=0; i<size; i++)
		if (soln[i] != userSoln[i])
			flag=FALSE;


	return flag;
}
