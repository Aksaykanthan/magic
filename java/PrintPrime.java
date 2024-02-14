package java;

public class PrintPrime {

    public static int is_prime(int num){
        for (int i=2 ; i <= num/2; i++ ){
            if (num % i == 0 ){
                return 0;
            }
        }
        return 1;
    }

    public static void primerange(int start, int end){
        for (int i = start; i < end;i++){
            if (is_prime(i) == 1){
                System.out.println(i+" is a prime Number");
            }
        }
    }
    public static void main(String[] args) {
        primerange(1,10);
    }
}