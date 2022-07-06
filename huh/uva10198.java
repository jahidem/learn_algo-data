import java.math.BigInteger;
import java.util.HashMap;
import java.util.Scanner;

class uva10198 {
    static HashMap<Integer,BigInteger> mp=new HashMap<>();
     BigInteger dpx(Integer nw){
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
        uva10198 dod = new uva10198();     
        dod.task();
    }
    void task() {
        Scanner s = new Scanner(System.in);
        while (s.hasNextInt()) {
            Integer n = s.nextInt();
            System.out.println(dpx(n));
        }
    }

}