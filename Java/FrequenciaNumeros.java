import java.util.Scanner;

public class Main
{
	public static void main ( String [] args )
	{
		Scanner in = new Scanner ( System.in );
		int x;
		int n = in.nextInt();
		int numeros [] = new int [2000];
		int num [] = new int [2000];
		
		for ( x=0; x < 2000; x++ )
		{
			numeros [x] = 0;
		}
		
		for ( x=0; x < n; x++ )
		{
			num[x] = in.nextInt();
		}
		
		for( x=0; x<n; x++ )
		{	
			numeros[num[x]]++;
		}
		
		for( x=0; x<2000; x++ )
		{
			if( numeros[x]!=0 )
			{
				System.out.printf("%d aparece %d vez(es)\n",x,numeros[x]);
			} 
		}	
	}
}
