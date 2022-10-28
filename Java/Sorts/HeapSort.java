package Sorts;

import java.io.*;
import java.util.*;

public class HeapSort {

	public static void main(String[] args) {
		

		Random r = new Random();
		
		int n = 100000;
		int a[] = new int[n];
		
			for(int i = 0; i<n; i++) {
				a[i] = r.nextInt(5000);
			}
		
			double start = System.currentTimeMillis();
			heapSorting(a);
			double end = System.currentTimeMillis();
			
			
			System.out.println("HeapSort");
			System.out.println("Size of the array "+n);
			System.out.println("Time taken : "+(end-start));
			

	}
	
	static  void heapSorting(int a[]) {
		
		int n = a.length;
		
			for(int i  = (n/2)-1; i>=0; i--) {
				heapify(a,n,i);
			}
			
			for(int i = n-1; i>0; i--) {
				
				int temp = a[0];
				a[0] = a[i];
				a[i] = temp;
				
				heapify(a,i,0);
			}
	}
	
	static void heapify(int a[],int n , int i) {
		
		int largest = i;
		int l  =2*i +1;
		int r = 2*i + 2;
		
		if(l<n && a[l]>a[largest]) {
			largest = l;
		}
		
		if(r<n && 	a[r]>a[largest]) {
			largest = r;
		}
		
		if(largest != i) {
			int temp = a[i];
			a[i] = a[largest];
			a[largest] = temp;
			
			heapify(a, n,largest );
		}
	}
	
	

}
