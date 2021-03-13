import java.util.Scanner;

public class Main 
{
    public static void main ( String [] args )
	{
		Scanner in = new Scanner ( System.in );
		double x1,x2,y1,y2;
		do
		{
			x1 = in.nextDouble();
			y1 = in.nextDouble();
			x2 = in.nextDouble();
			y2 = in.nextDouble();
			double dist = Math.sqrt(Math.pow(x1-x2,2)+Math.pow(y1-y2,2));
			System.out.printf("%.2f\n",dist);
		}
		while(!(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0));		
	}
}
