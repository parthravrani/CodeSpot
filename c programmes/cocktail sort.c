#include <stdio.h>
#define MAX 8
int main()
{
	int data[MAX];
	int i, j, n, c;
	printf("\nEnter the data");
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &data[i]);
	}
	n = MAX;    
	do
	{
		for (i = 0;  i < n - 1; i++)
		{
			if (data[i] > data[i + 1])
			{
				data[i] = data[i] + data[i + 1];
				data[i + 1] = data[i] - data[i + 1];
				data[i] = data[i] - data[i + 1];
			}
		}
		n = n - 1;

		for (i= MAX - 1, c = 0; i >= c; i--)
		{
			if(data[i] < data[i - 1])
			{
				data[i] = data[i] + data[i - 1];
				data[i - 1] = data[i] - data[i - 1];
				data[i] = data[i] - data[i - 1];
			}
		}
		c = c + 1;
	} 
	
	while (n != 0 && c != 0);
	printf("The sorted elements are: ");

	for (i = 0; i < MAX; i++)
	{
		printf("%d\t", data[i]);
	}
}

========
 Output
========

Enter the data 5 2 3 6 9 8 2 5                                                                                              
The sorted elements are: 2       2       3       5       5       6       8
