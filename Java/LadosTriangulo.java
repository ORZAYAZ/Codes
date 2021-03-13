import java.util.Scanner;

public class Main 
{
    public static void main ( String [] args )
	{
		Scanner in = new Scanner ( System.in );
		int x,y,z;
		x = in.nextInt();
		y = in.nextInt();
		z = in.nextInt();
		
		if ( x + y < z || x + z < y || z + y < x )
		{
			System.out.println("NAO FORMA UM TRIANGULO");
		}
		else
		{
			if ( x == y && y == z)
			{
				System.out.println("EQUILATERO");
			}
			else if ( x != y && y == z || y != y && y == x)
			{
				System.out.println("ISOSCELES");
			}
			else
			{
				System.out.println("ESCALENO");
			}
		}
		
		in.close();
	}
}
