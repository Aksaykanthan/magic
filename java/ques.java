package java;

public class ques {
    public static int A(int m, int n) {
        if (m == 0) {
            return n + 1;
        } else if (m > 0 && n == 0) {
            return A(m - 1, 1);
        } else if (m > 0 && n > 0) {
            return A(m - 1, A(m, n - 1));
        }
        return -1;
    }

    public static void main(String[] args) {
        for (int i = 0; i <= 3; i++) {
            for (int j = 0; j <= 3; j++) {
                System.out.printf("[%d,%d] ", i, j);
                System.out.println(A(i, j));
            }
        }
    }
}
