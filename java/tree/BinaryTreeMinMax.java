package java.tree;

// package java.tree;

public class BinaryTreeMinMax {

    public static void findMinMaxValues(int[] arr, int nodeIndex) {
        if (nodeIndex < arr.length && arr[nodeIndex] != -1) {
            int leftChildIndex = 2 * nodeIndex + 1;
            int rightChildIndex = 2 * nodeIndex + 2;

            int smallestLeft = Integer.MAX_VALUE;
            int largestLeft = Integer.MIN_VALUE;

            int smallestRight = Integer.MAX_VALUE;
            int largestRight = Integer.MIN_VALUE;

            if (leftChildIndex < arr.length && arr[leftChildIndex] != -1) {
                findMinMaxValues(arr, leftChildIndex);
                smallestLeft = Math.min(smallestLeft, arr[leftChildIndex]);
                largestLeft = Math.max(largestLeft, arr[leftChildIndex]);
            }

            if (rightChildIndex < arr.length && arr[rightChildIndex] != -1) {
                findMinMaxValues(arr, rightChildIndex);
                smallestRight = Math.min(smallestRight, arr[rightChildIndex]);
                largestRight = Math.max(largestRight, arr[rightChildIndex]);
            }

            System.out.println("Node " + arr[nodeIndex] +
                    ": Smallest in left subtree = " + (smallestLeft == Integer.MAX_VALUE ? "N/A" : smallestLeft) +
                    ", Largest in left subtree = " + (largestLeft == Integer.MIN_VALUE ? "N/A" : largestLeft) +
                    ", Smallest in right subtree = " + (smallestRight == Integer.MAX_VALUE ? "N/A" : smallestRight) +
                    ", Largest in right subtree = " + (largestRight == Integer.MIN_VALUE ? "N/A" : largestRight));
        }
    }

    public static void main(String[] args) {

        int[] arr = { 10, 5, 20, 3, 8, 15, 25 };

        int nodeIndex = 1;

        findMinMaxValues(arr, nodeIndex);
    }
}
