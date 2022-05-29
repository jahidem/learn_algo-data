import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int T;T= sc.nextInt();
        for(int _t=1;_t<=T;_t++){
        int n;

        n=sc.nextInt();
        List<BigInteger> ls = new ArrayList<BigInteger>();
        for(int u=0;u<n;u++)
            ls.add(sc.nextBigInteger());
        BigInteger an = ls.get(0);
        for (BigInteger x:ls) {
            an =  an.divide( an.gcd(x)).multiply(x);
        }

        System.out.println("Case "+_t+": "+an);}
    }
}
