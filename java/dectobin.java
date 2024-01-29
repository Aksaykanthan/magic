public class dectobin {
    public static void d2b(int num) {
        if (num >= 1) {
            d2b(num / 2);
        }
        System.out.print(num % 2);
    }

    public static void main(String[] args) {
        int num = 7;
        
        d2b(num);
        System.out.println();
    }
}

// * find the 2nd largest element in a array
// * Reverse a array 
// * print duplicate numbers in a array
