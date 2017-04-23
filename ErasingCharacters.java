import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class ErasingCharacters
{
	public static void main(String [] args){
	Scanner in = new Scanner(System.in);
	String s = in.next();
	int count=0,max=0;
	char c=s.charAt(0),mc;
	for(int i=0;i<s.length();i++){
		c = s.charAt(i);
		count=0;
		for(int j=i+1;j<s.length();j++){
			if( c == s.charAt(j)){
					count++;
			}}
			if(count > max){
				max = count;
				mc = c;
			}	
			}
			for(int i=0;i<s.length();i++){
				if(s.charAt(i) == c){
					if(i==0)
						s = s.substring(1);
					else if(i==(s.length()-1))
						s = s.substring(0,s.length()-2);
					else
						s = s.substring(0,i-1) + s.substring(i+1,s.length());
				}
			}
			System.out.println(s);
}

}
