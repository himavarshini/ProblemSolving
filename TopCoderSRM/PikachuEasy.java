import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class PikachuEasy
{
	public String check(String word)
	{
		for(int i=0;i<word.length();i++){
			if(word.charAt(i)=='p'){
				if(((i+1)<word.length())&&(word.charAt(i+1)=='i'))
					i+=2;
				else 
					return "NO"; 
			}
			else if(word.charAt(i)=='k'){
				if(((i+1)<word.length())&&(word.charAt(i+1)=='a'))
					i+=2;
				else 
					return "NO"; 
			}
			else if(word.charAt(i)=='c'){
				if(((i+2)<word.length())&&(word.charAt(i+1)=='h')&&(word.charAt(i+2)=='u'))
					i+=2;
				else 
					return "NO"; 
			}
		}
		return "YES";
	}
}
