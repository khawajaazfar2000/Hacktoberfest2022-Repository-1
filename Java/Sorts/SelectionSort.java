package Sorts;

import java.io.*;
import java.util.*;


public class SelectionSort {

	public static void main(String[] args) {
		
		
	Random r = new Random();
			
			int n = 1000;
			int a[] = new int[n];
			
				for(int i = 0; i<n; i++) {
					a[i] = r.nextInt(1000);
				}
			
				double start = System.currentTimeMillis();
				
				for(int i = 0; i<n-1; i++) {
					
					int minInd = i;
					
						for(int j = i; j<n; j++) {
							
							if(a[j]<a[minInd]) {
								minInd= j;
							}
						}
						
						int temp = a[i];
						a[i] = a[minInd];
						a[minInd] = temp;
				}
				
				double end = System.currentTimeMillis();
				
				System.out.println("Selection Sort : ");
				System.out.println("Size of the array : "+n);
				System.out.println("Time Taken : "+(end-start));
	}

}
