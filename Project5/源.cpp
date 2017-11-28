#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	void sort(char*name[], int n);
	void print(char*name[], int n);
	char *name[50];
	int s;
	scanf("%d", &s);
	for ( int i = 0; i < s; i++)
	{
	     name[i] = (char*)malloc(50 * sizeof(char));
	}
	int i;
	for (i = 0; i < s; i++)
		scanf("%s", name[i]);

	sort(name, s);
	print(name, s);
	return 0;
}

void sort(char*name[], int n)
{
	char* temp;
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
			if (strcmp(name[k], name[j]) > 0)k = j;
		if (k != i)
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}

void print(char*name[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s", name[i]);
}