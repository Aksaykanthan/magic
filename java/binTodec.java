package java;

public class binTodec {
    public static void main(String[] args) {
        int num = 111;
        double result = 0;
        for (int i =0; num > 0; i++){
            result += (num%10) * Math.pow(2, i);
            num /= 10;
        }
        System.out.println(result);
    }
    
}
