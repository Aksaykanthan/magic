
// package java.tree;
import java.util.Scanner;

public class createTree {

    private static void pArr(int[] arr, int index, int length) {
        if (index < length) {
            System.out.print(arr[index] + " ");

            pArr(arr, 2 * index + 1, length);
            pArr(arr, 2 * index + 2, length);
        }
    }

    public static int[] BinaryTree() {
        Scanner x = new Scanner(System.in);
        // x.nextLine();
        System.out.println("Enter the number of nodes in your binary tree:");
        int n = x.nextInt();
        int[] arr = new int[(2^n)-1];
        System.out.println(n);
        for (int i = 0; i < n; i++) {
            System.out.print("Enter value for node " + (i + 1) + " : ");
            int num = x.nextInt();
            arr[i*2+1] = num;
        }
        return arr;
    }

    public static void main(String[] args) {
        int arr[] = BinaryTree();
        pArr(arr, 0, arr.length);
    }

}