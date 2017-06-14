import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
public class FoxAndIntegers
{
	public int[] get(int AminusB, int BminusC, int AplusB, int BplusC)
	{
		int []a = new int[3];
		float A,B,C;
		B=(BminusC+BplusC)/(float)2;
		if (Math.floor(B)!=B)
			return a;
		C=BplusC-B;
		A=AminusB+B;	
		a[0]=(int)A;
		a[1]=(int)B;
		a[2]=(int)C;
		return a;
	}
}
