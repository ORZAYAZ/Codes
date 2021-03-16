import java.util.Scanner;

public class Palindromo
{
  static void check (String x, String s)
  {
    if (x.equals(s) == true)
    {
      System.out.println("SIM");
    }
    else
    {
      System.out.println("NAO");
    }
  }

  static String rev (String x)
  {
    StringBuilder sb = new StringBuilder(x);  
    sb.reverse();
    return sb.toString();
  }
  
  public static void main (String [] args)
  {
    Scanner in = new Scanner (System.in);
    String s;
    String end = "FIM";

    do
    {
      s = in.nextLine();
      String x = rev (s.toLowerCase());
      check (x, s);
    } while (s.equals(end) == false);
    
    in.close();
  }
}
