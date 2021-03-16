import java.util.Scanner;

public class CifraCesar
{
	//Cifrar usando a chave 3.
	
	static String cifra (String x)
	{
		int i;
		int aux;
		int tam = x.length();
		StringBuilder sb = new StringBuilder();
		for (i = 0; i < tam; i++)
		{
			aux = ((int) x.charAt(i)) + 3;
			while (aux > 126)
			{
				aux -= 94;
			}
			sb.append ((char) aux);
		}
		return sb.toString();
	}
	
	public static void main (String [] args)
	{
		Scanner in = new Scanner (System.in);
		String x;
		String s;
		String end = "FIM";
		do
		{
			x = in.nextLine();
			s = cifra(x);
			System.out.printf("%s\n",s);
		} while ((x.compareTo(end)) != 0);
		
		//compare.To para finalizr o programa caso digite "FIM".
	}
}
