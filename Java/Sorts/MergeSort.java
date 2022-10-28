package Sorts;

import java.io.*;
import java.util.*;

public class MergeSort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
	Random r = new Random();
			
			int n = 500;
			int a[] = new int[n];
			
				for(int i = 0; i<n; i++) {
					a[i] = r.nextInt(5000);
				}
			
				double start = System.currentTimeMillis();
				Mergesort(a, 0, n-1);
				double end = System.currentTimeMillis();
				
				System.out.println("Merge Sort ");
				System.out.println("Size of the Array "+n);
				System.out.println("Time taken "+(end-start));

	}
	
	static void merge(int arr[], int beg, int mid, int end)  
	{  
	  
	int l = mid - beg + 1;  
	int r = end - mid;  
	  
	int LeftArray[] = new int [l];  
	int RightArray[] = new int [r];  
	  
	for (int i=0; i<l; ++i)  
	LeftArray[i] = arr[beg + i];  
	  
	for (int j=0; j<r; ++j)  
	RightArray[j] = arr[mid + 1+ j];  
	  
	  
	int i = 0, j = 0;  
	int k = beg;  
	while (i<l&&j<r)  
	{ 
		
	if (LeftArray[i] <= RightArray[j])  
	{  
		arr[k] = LeftArray[i];  
		i++;  
	}
	
	else  
	{  
		arr[k] = RightArray[j];  
		j++;  
	} 
	
	k++;  
	} 
	
	while (i<l)  
	{  
		arr[k] = LeftArray[i];  
		i++;  
		k++;  
	}  
	  
	while (j<r)  
	{  
		arr[k] = RightArray[j];  
		j++;  
		k++;  
	}
	
	}  
	  
	static void Mergesort(int arr[], int beg, int end)  
	{
		
	if (beg<end)  
	{
		
		int mid = (beg+end)/2;  
		Mergesort(arr, beg, mid);  
		Mergesort(arr , mid+1, end);  
		merge(arr, beg, mid, end);  
	}  
	}  

}
