package hacker_earth;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class rotation {
	
	public static void main(String[] args)throws IOException {
		
		char arr1[]= {'a','a','x','a','a','b','c'};
		
		char arr[]= {'a','a','b','c','a','a','x'};
		
		int number;
		int count=0;
		char temp;
		String a=new String();
		String b=new String();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		number=Integer.parseInt(br.readLine());
		//sc.nextLine();
		br.readLine();
		b=br.readLine();
		
		a=br.readLine();
		
		System.out.println(number);
		System.out.println(b);
		System.out.println(a);
		while(true)
		{
			if(a.equals(b))
			{
				//System.out.println(count);
				break;
			}
			else
			{
				count=count+1;
				b=update(b,number);
			}
		}
		System.out.println(count);
		
		/*while(!(a.equals(b)))
		{
			
			count=count+1;
			temp=arr[6];
			for(int i=5;i>=0;i--)
			{
				arr[i+1]=arr[i];
				System.out.println("i at "+i);
				System.out.println(arr[i]);
			}
			arr[0]=temp;
			System.out.println(count);
		}
		System.out.println(count);
		b=new String(arr);*/
	}


	private static String update(String b, int number) {
	
		
		//System.out.println(number);
		char[] arr=b.toCharArray();
		//System.out.println(arr);
		char temp;
		temp=arr[number-1];
		for(int i=number-2;i>=0;i--)
		{
			arr[i+1]=arr[i];
			//System.out.println("i at "+i);
			//System.out.println(arr[i]);
		}
		arr[0]=temp;
	    String c=new String(arr);
		
		return c;
	}
}
