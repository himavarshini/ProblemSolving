import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class BallAndHats
{
	public int getHat(String hats, int numSwaps)
	{
		if(numSwaps==0)
			return hats.indexOf('o');
		if(hats.charAt(0)=='o')
			return numSwaps%2;
		if(hats.charAt(0)=='0')
			return (numSwaps-1)%2;
		return 2;
	}
}   
