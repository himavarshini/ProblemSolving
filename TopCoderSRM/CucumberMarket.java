import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class CucumberMarket
{
	public String check(int[] price, int budget, int k)
	{
		int p=0;
		Arrays.sort(price);
		for(int i=0;i<k;i++){
		p+=price[i];
		}
		if(p<=budget)
			return "YES";
		else
			return "NO";
	}
	

}
