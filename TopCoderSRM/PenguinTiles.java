import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class PenguinTiles
{
	public int minMoves(String[] tiles)
	{
		int m=tiles[0].length(),p=0,j=0,q=0;
			int l=tiles.length;
			for(int i=0;i<l;i++){
				for(j=0;j<m;j++){
					if(tiles[i].charAt(j)=='.'){
						p=i;q=j;j=m+1;break;
					}
				}
				if(j==(m+1)){
					break;
				}
			}
			if((p==(l-1))&&(q==(m-1)))
				return 1;
			else if((p==0)&&(q==0))
			return 2;
			else if((p==0)||(q==0))
				return 1;
			else{
				if(q==(m-1)){
					return 1;
				}
				else
					return 2;
			}
	}

	
	

}
