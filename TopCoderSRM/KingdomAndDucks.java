import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class KingdomAndDucks
{
	public int minDucks(int[] duckTypes)
	{
		int t=0,m=1,tmp=1,k=0,l=duckTypes.length;
		int []a = new int[l];
		Arrays.sort(duckTypes);
		for(int i=0;i<l;i++){
			if(!Arrays.asList(a).contains(duckTypes[i]))
			{
				a[k++]=duckTypes[i];
				t++;
			}
		}	
		for(int i=0;i<l-1;i++){
			if(duckTypes[i]== duckTypes[i+1])
			{
				tmp++;
			}
			else if(tmp>m)
			{
			  m=tmp;
			  tmp=1;
			}
		}
		return t*m;
	}
}
