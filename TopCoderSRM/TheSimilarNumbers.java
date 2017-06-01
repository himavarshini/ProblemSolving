import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.lang.*;


public class TheSimilarNumbers
{
	public int find(int lower, int upper)
	{
		int l = (int) Math.log10(upper) ;
	int p=(int) Math.pow(10,l),c=0;
for(int i=1;i<l;i++){

	if(((upper/p)>=lower)&& ((upper/p) != 1)&&((upper/p)!=10)){
		c++;p/=10;}
}
	
	return c;
	}

}
