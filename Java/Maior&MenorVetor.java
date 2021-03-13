import java.util.Scanner;

public class Main 
{
    public static void main ( String [] args ) 
	{
		Scanner in = new Scanner ( System.in );
		int n, maior, menor;
		maior = Integer.MIN_VALUE;
		menor = Integer.MAX_VALUE;
		n = in.nextInt();
		int vetor [] = new int [n];
		for(int i = 0; i < n; i++)
		{
			vetor[i] = in.nextInt();
			if(vetor [i] > maior)
			{
				maior = vetor[i];
			}
			if(vetor [i] < menor)
			{
				menor = vetor[i];
			}
		}
		System.out.printf("MAIOR = %d\n",maior);
		System.out.printf("MENOR = %d\n",menor);	
	}
}
