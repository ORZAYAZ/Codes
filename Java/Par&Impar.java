import java.util.Scanner;

public class Main 
{
    public static void main (String [] args)
	{
		Scanner in = new Scanner ( System.in );
		int num;
		num = in.nextInt();
		if (num % 2 == 0)
		{
			if (num > 0)
			{
				System.out.printf("PAR e POSITIVO");
			}
			else if (num < 0)
			{
				System.out.printf("PAR e NEGATIVO");
			}
			else
			{
				System.out.printf("PAR e NEUTRO");
			}
		}
		else
		{
			if (num > 0)
			{
				System.out.printf("IMPAR e POSITIVO");
			}
			else
			{
				System.out.printf("IMPAR e NEGATIVO");
			}
		}
	}
}
