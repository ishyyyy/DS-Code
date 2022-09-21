package com.company;
import java.util.*;

public class Arraylist extends Thread {
    public static void main(String[] args) {
        ArrayList<Integer> l1=new ArrayList<>();
        l1.add(1);
        l1.add(2);
        l1.add(3);
        l1.add(4);
        l1.add(5);
        l1.add(6);
        l1.add(7);
        l1.add(8);
        l1.add(9);
        System.out.println("ArrayList before Removing " + l1);
        l1.remove(5);
        System.out.println("ArrayList after Removing" + l1);

    }
}
