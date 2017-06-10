import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class SemiPerfectSquare
{
	public int isPerfectSquare(int N){
		for(int i=1;i<(N/2);i++){
			if((i*i) == N)
				return i;
		}
		return 0;
	}
	public String check(int N)
	{
		int c=1;
		for(int i=1;i<(N/2);i++)
		{
			if((N%i)==0){
				c=isPerfectSquare(N/i);
				if(c>i)			
					return 	"Yes";
			}
		}
		return "No";
			
	}
}
