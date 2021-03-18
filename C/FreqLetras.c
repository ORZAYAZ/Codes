#include <stdio.h>
#include <string.h>

void freq (char *s)
{
	int i = 0;
	int j = 0;
	int maior;
	int freq [26];
	
	for (i = 0; i < 26; i++)
	{
		freq [i] = 0;
	}
	
	char base [27] = "abcdefghijklmnopqrstuvwyz";
	
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == base[j] || s[i] + 32 == base[j])
			{
				freq[j]++;
				break;
			}
		}
	}
	
	maior = freq[0];
    for (i = 1; i < 26; i++)
    {
		if (freq[i] > maior)
        {
			maior = freq[i];
		}
	}
	
	   
    for (i = 0; i < 26; i++)
    {
        if (freq[i] == maior)
        {
            printf("%c", base[i]);
		}
	}
		printf("\n");	
}

void read ()
{
	char s [200];
	scanf ("%s", s);
	freq (s);	
}

int main ()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		read();
	}
	
	return 0;
}
