#include<stdio.h>
#include<stdlib.h>
/* bug: should check if s is zero */
int sign (int s)
{
	if(s == 0)
		return 0;
	else
		return s/abs(s);
}
main ()
{	int data[3], i, k, n, negatives, zeros, positives;
	n = sizeof data / sizeof (int);
	negatives = zeros = positives = 0;
	printf("Enter %d numbers : ", n);
/* need loop on i from 0 to n-1 around this */
	for(i = 0; i < n; i++)
		scanf("%d", &data[i]);
/* read in the data */
/* now count negatives , zeros, positives */
	for(i = 0; i < n; i++)
	{	k = sign(data[i]);
		if(k == 0)
			zeros++;
		else if(k == 1)
			positives++;
		else
			negatives++;	
	}
	printf("negatives = %d, zeros = %d, positives = %d\n", negatives, zeros, positives);
}
