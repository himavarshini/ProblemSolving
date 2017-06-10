import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class BlackAndWhiteSolitaire
{
	public int minimumTurns(String cardFront)
	{
		int flip=0;
		for(int  i=0;i<(cardFront.length()-1);i++){
			if(cardFront.charAt(i)==cardFront.charAt(i+1)){
			flip++;
			} 
		}
		return flip;
	}
}
