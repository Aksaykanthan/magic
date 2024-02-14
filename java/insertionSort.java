package java;

import java.util.Arrays;

public class insertionSort {
    public static void main(String[] args) {
        int[] arr = {10,4,3,2,5,6,7,1,3,0};
        for (int i = 1 ; i < arr.length ; i++){
            int v = arr[i];
            int j;
            for ( j = i-1 ; (j >= 0 ); j--){
                if (arr[j] > v){
                    arr[j + 1] = arr[j];
                }else {
                    break;
                }
            }
            arr[j+1] = v;
            
        }
        System.out.println(Arrays.toString(arr));
    }
}
