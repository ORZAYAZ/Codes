import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
	{
		Scanner in = new Scanner ( System.in );
		int n,posicao = 0;
		int menor = Integer.MAX_VALUE;
		n = in.nextInt();
		int vetor[] = new int [n];
			for(int i = 0; i < n; i++)
			{
				vetor[i] = in.nextInt();
				if(vetor[i] < menor)
				{
					menor = vetor[i];
					posicao = i;
				}
			}
	    System.out.printf("Menor valor: %d\n",menor);
		System.out.printf("Posicao: %d\n",posicao);
        in.close();
	}
}
