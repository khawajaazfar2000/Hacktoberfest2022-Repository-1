package Sorts;

import java.io.*;
import java.util.*;

public class InsertionSort {

	public static void main(String[] args) {
		
	char a[] = {'G','U','J','A','R','A','T','T','E','C','H'};
	int n = a.length;
	
				double start = System.currentTimeMillis();
				
				for(int i =1; i<n; i++) {
					char key = a[i];
					int j = i-1;
					
						while(j>=0 && a[i]>key) {
							a[j+1] = a[i];
							j--;
						}
						
						a[j+1] = key;
						
						for(char e : a) {
							System.out.print(e+" ");
						}
						System.out.println();
				}
				
				double end = System.currentTimeMillis();
				
				System.out.println("Inserion Sort");
				System.out.println("Size of the array : " +n);
				System.out.println("Time taken : "+(end-start));
				
			
	}

}
