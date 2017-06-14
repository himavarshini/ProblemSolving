import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;

public class EllysDirectoryListing
{
	public String[] getFiles(String[] files)
	{
		int oi=Arrays.asList(files).indexOf("."),si=Arrays.asList(files).indexOf("..");
		if(oi<si){
		files[oi]=files[files.length-1];
		files[files.length-1]=".";
		files[si]=files[files.length-2];
		files[files.length-2]="..";
		}
		else if(oi>si){
			files[si]=files[files.length-1];
			files[files.length-1]="..";
			files[oi]=files[files.length-2];
			files[files.length-2]=".";
		}
		return files;
	}
}
