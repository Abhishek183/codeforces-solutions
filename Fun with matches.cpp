/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t=0;
		Scanner s = new Scanner(System.in);
		t=s.nextInt();
		
		while(t>0)
		{t--;
		int a,b;
		a=s.nextInt();
		b=s.nextInt();
		int[] arr = {6,2,5,5,4,5,6,3,7,6};
		int sum=0;
		sum = a + b;
		int rem;
		int Frem=sum;
		do
		{
		    rem = Frem%10;
		    Frem = Frem/10;
		    sum = sum + arr[rem];
		}
		while(Frem!=0);
		System.out.println(sum);
		    
		}
	}
}
