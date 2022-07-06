import java.math.BigInteger;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    static HashMap<Integer,BigInteger> mp=new HashMap<>();
    public static BigInteger dpx(Integer nw){
        if(nw==0)
            return new BigInteger("1");
        else if (nw<0)
            return new BigInteger("0");
        else if (mp.containsKey(nw)) {
            return mp.get(nw);
        }
        BigInteger cal = new BigInteger("0");
        for(Integer u=1;u<=3;u++){
            if(u==1)
                cal = cal.add(dpx(nw-u).multiply(new BigInteger("2")));
            else
                cal =cal.add(dpx(nw-u));
        }
        mp.put(nw,cal);
        return  cal;
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        while (s.hasNextInt()) {
            Integer n = s.nextInt();
            System.out.println(dpx(n));
        }
    }

}