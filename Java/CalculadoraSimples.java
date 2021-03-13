import java.util.Scanner;

public class Main 
{
    public static void main (String [] args)
	{
		int n1, n2, soma, mult, sub;
		float div;
		Scanner in = new Scanner ( System.in );
		n1 = in.nextInt();
		n2 = in.nextInt();
		soma = n1 + n2;
		mult = n1 * n2;
		sub = n1 - n2;
		div = n2 / n1;
		
		if ( n1 == 0 || n2 == 0)
		{
			System.out.printf("SOMA = %d\n",soma);
		    System.out.printf("SUBTRACAO = %d\n",sub);
		    System.out.printf("MULTIPLICACAO = %d\n",mult);
			System.out.printf("DIVISAO = INDETERMINADO\n");
		}
		
		else
		{
			System.out.printf("SOMA = %d\n",soma);
		    System.out.printf("SUBTRACAO = %d\n",sub);
		    System.out.printf("MULTIPLICACAO = %d\n",mult);
		    System.out.printf("DIVISAO = %.2f\n",div);
		}
		
		in.close();	 
	}
}
