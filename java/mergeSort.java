package java;

import java.util.Arrays;

public class mergeSort {
    public static void main(String[] args) {
        int[] a = {1,4,6,7};
        int[] b = {2,3,5,6};
        int[] k = merge(a,b);
        System.out.println(Arrays.toString(k));
    }

    private static int[] merge(int[] a, int[] b) {
        int[] r = new int[a.length + b.length];
        int i=0,j=0,k=0;
        while (i < a.length && j < b.length){
            if (a[i] < b[j]){
                r[k++] = a[i++];
            }else{
                r[k++] = b[j++];
            }
        }
        while (i < a.length){
            r[k++] = a[i++];
        }
        while (j < b.length){
            r[k++] = b[j++];
        }
        return r;
    }


}
