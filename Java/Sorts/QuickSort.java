package Sorts;

import java.io.*;
import java.util.*;

public class QuickSort {

	public static void main(String[] args) {
		
		Random r = new Random();
		
		int n = 50000;
		int a[] = new int[n];
		
			for(int i = 0; i<n; i++) {
				a[i] = r.nextInt(50000);
			}
		
			double start = System.currentTimeMillis();
			quicksort(a, 0 , a.length-1);
			long end = System.currentTimeMillis();
			
			System.out.println("QuickSort ");
			System.out.println("Size of teh array "+n);
			System.out.println("Time taken : "+(end-start));
			
	}
	
	static void quicksort(int a[] , int low , int high) {
			
			if(low < high) {
				int pi = partition(a, low, high );
				
				quicksort(a, low, pi-1);
				quicksort(a, pi+1, high);
				
			}
		}
			
	static int partition(int ar[] , int low , int high) {
		
		int pivot = ar[high];
		int i = low-1;
		
		for(int j = low; j<=high-1; j++) {
			if(ar[j]<=pivot) {
				i++;
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
		int tmp = ar[i+1];
		ar[i+1] = ar[high];
		ar[high] = tmp;
		
		return i+1;
		
	}
   

}
