package com.company;

import java.math.BigInteger;
import java.util.Arrays;
import java.util.HashMap;

public class Main {
    static HashMap<BigInteger,Integer> mp=new HashMap<>();
    public static void go(BigInteger n){
        if(mp.containsKey(n))
            return;
        else if(n.equals(new BigInteger("1"))){
            mp.put(n,0);return;}

        else if(n.equals(new BigInteger("0"))){
            mp.put(n,0);return;}

        if(n.divideAndRemainder(
                new BigInteger("2"))[1]
                .equals(new BigInteger("1"))){
            go(n.subtract(new BigInteger("1")));
            go(n.add(new BigInteger("1")));
            mp.put(n, Integer.min(mp.get(n.subtract(new BigInteger("1"))),
                    mp.get(n.add(new BigInteger("1")))) + 1);
        }
        else{
            go(n.divide(new BigInteger("2")));
            mp.put(n,mp.get(n.divide(new BigInteger("2")))+1);
        }
    }
    public static void main(String[] args) {
        String x= "15";
        BigInteger n = new BigInteger(x);
        go(n);
        System.out.println
                ((int)mp.get(n));
    }

}
