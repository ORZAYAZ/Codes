import java.util.Scanner;

public class Main
{
    static float recursivo ( int n )
    {
        float soma = 0;
        float den = 0;
        for ( den = 1; den <= n; den++ )
        {
            soma = 1 / den + soma;
        }
        return soma;
    }

    public static void main ( String [] args )
    {
        Scanner in = new Scanner ( System.in );
        int n = in.nextInt();
        System.out.printf( "%.2f", recursivo ( n ) );
    }
}
