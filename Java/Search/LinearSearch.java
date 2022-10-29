package Search;

import java.util.*;

public class LinearSearch {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        long start = System.currentTimeMillis();
        int target = sc.nextInt();
        int result = linearSearch(arr, target);
        if (result != -1) {
            System.out.println("Element " + target + " found at index : " + result);
        } else {
            System.out.println("Element not found in the array");
        }
        long end = System.currentTimeMillis();
        System.out.println("Time taken : " + (end - start));
    }

    private static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) return i;
        }
        return -1;
    }
}
