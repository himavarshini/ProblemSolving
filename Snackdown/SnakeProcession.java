import java.io.*;
import java.util.*;
class SnakeProcession{
  public static void main (String [] args){
    Scanner scan= new Scanner(System.in);
    int t,l,flag=1;
    String s;
    t=scan.nextInt();
    for(int i=0;i<t;i++){
      l=scan.nextInt();flag=0;
      s=scan.next();
      int j;
      for( j=0;j<l;j++){
          if(s.charAt(j)=='H'){
            if(flag!=0){
            System.out.println("Invalid");j=l;}
            else
              flag =1;
          }
          else if(s.charAt(j)=='T'){
            if(flag!=1){
              System.out.println("Invalid");j=l;flag=1;
            }
            else
              flag=0;
          }
      }
      if(flag==0)
        System.out.println("Valid");
      else if((flag==1) && (j==l))
          System.out.println("Invalid");
    }
  }
}
