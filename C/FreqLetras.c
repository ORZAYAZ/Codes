#include <stdio.h>
#include <string.h>

/*------------¬
 | Pedro Igor | 
 | 12/03/2021 |
 | AEDII - PC |
 \-----------*/

void check (char *s)
{
	int i;
	int j;
	int maior;
	int freq [26];
	
	char alfa [27] = "abcdefghijklmnopqrstuvwxyz";
		
	for (i = 0; i < 26; i++)
	{
		freq[i] = 0;
	}
	
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == alfa[j] || s[i] + 32 == alfa[j])
			{
				freq[j]++;
			}	
		}
	}
	
	maior = freq[0];
	
	for (i = 1; i < 26; i++)
	{
		if(freq[i] > maior)
		{
			maior = freq[i];
		}
	}
	
	for (i = 0; i < 26; i++)
	{
		if (freq[i] == maior)
		{
			printf("%c", alfa[i]);
		}
	}
	printf("\n");
	
}

void read ()
{
	char s [50];	
	scanf ("%s", s);
	check (s);
}

int main ()
{
	int i;
	int N;
	scanf ("%d", &N);
	
	for (i = 0;i < N; i++)
	{
		read();
	}
	return 0;
}
