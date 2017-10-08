/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array_large;

import java.util.Scanner;

/**
 *
 * @author kandasamy
 */
public class char_swap {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // TODO code application logic here
        Scanner in=new Scanner(System.in);
       // String[] str=new String[20];
        String str=in.nextLine();
       char[] ch=str.toCharArray();
       int i;
       char t;
       for(i=0;i<str.length();i=i+2)
       {
           t=ch[i];
           ch[i]=ch[i+1];
           ch[i+1]=t;
       }
       System.out.print(ch);  
    }
}
