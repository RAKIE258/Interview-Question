import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str=sc.nextLine();
		String s[]=str.split(" ",0);
		List<String> res=new ArrayList<>();
		for(String i : s)
		{
		    boolean r=palindrome(i);
		    if(r==false)
		        res.add(i);
		}
		for(String i : res)
		    System.out.print(i+" ");
	}
	public static boolean palindrome(String s)
	{
	    int n=s.length(),f=0;
	    char ch[]=s.toCharArray();
	    for(int i=0;i<n/2;i++)
	    {
	        if(ch[i]==ch[n-i-1]){
	            f=1;
	        }
	    }
	    if(f==1)
	        return true;
	   return false;
	}
}
