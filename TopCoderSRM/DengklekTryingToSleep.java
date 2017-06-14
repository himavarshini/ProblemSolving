import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class DengklekTryingToSleep
{
	public int minDucks(int[] ducks)
	{
		Arrays.sort(ducks);
		int n=ducks.length;
		return ducks[n-1]-ducks[0]-n+1;
	}
}
