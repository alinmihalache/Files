#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	FILE *fp;
	fp=fopen("D://pclp.txt", "w");
	if (fp==NULL)
	{
		printf(" NU sa putut deschide fisierul");
		exit (1);
	}
	for (i=1; i<=10; i++)
	{
		fprintf (fp, " line %d \n", i);
	}
	fclose (fp);
	fp=fopen ("D://pclp.txt", "a");
	for (i=1; i<=10; i++)
	{
		fprintf (fp, "L %d\n", i+10);
	}
	fclose (fp);
}

