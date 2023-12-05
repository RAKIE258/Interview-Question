import java.util.Arrays;
import java.util.Scanner;
import java.lang.*;
public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int n=str.length();
		char dup[]=str.toCharArray();
		char ch[]=str.toCharArray();
		int res[]=new int[n];
		int out[]=new int[n];
		Arrays.sort(ch);
		for(int i=0;i<n;i++) {
			char s=dup[i];
			{
				for(int j=0;j<n;j++) {
					if(s==(ch[j])) {
						res[i]=j+1;
					}
				}
			}
		}
		int iter=0;
		for(int i=n;i>0;i--) {
			int f=fact(i);
			int mul=res[iter++];
			int ans=f*mul;
			out[mul-1]=ans;
			
		}
		for(int i=0;i<n;i++)
			System.out.print(out[i]+" ");
	}

	 public static int fact(int n) {
		// TODO Auto-generated method stub
		 int fact=1;
		 for(int i=1;i<=n;i++)
			 fact*=i;
		return fact;
	}
}
