package Sorts;

import java.io.*;
import java.util.*;

public class BubbleSort {

	public static void main(String[] args) {
		
		
		
		char a[] = {'E','N','G','I','N','E','E','R','I','N','G'};
		int n = a.length;
		
		
			double start = System.currentTimeMillis();
			
			for(int i = 0; i<n-1; i++) {
				for(int j = 0; j<n-1-i; j++) {
					
					if(a[j+1]<a[j]) {
						char temp = a[j+1];
						a[j+1] = a[j];
						a[j] = temp;
					}
					
					for(char e : a) {
						System.out.print(e+" ");
					}
					System.out.println();
				}
			}
			
			double end = System.currentTimeMillis();
			
			
			
			System.out.println("Size of array "+n);
			System.out.println("Time Taken "+(end-start));
	}

}
