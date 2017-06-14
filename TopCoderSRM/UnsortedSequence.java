import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class UnsortedSequence
{
	public int[] getUnsorted(int[] s)
	{
		Arrays.sort(s);
		if(s[0]==s[s.length-1])
			return new int[0];
		for(int i=s.length-1;i>=0;i--){
	  	if(s[i]==s[i-1])
		  	continue;
		  else{
			  int tmp=s[i];
			  s[i]=s[i-1];
	  		s[i-1]=tmp;
		  	break;
		  }
		}
		return s;
	}
}
