public class permute {
    public static void main(String[] args) {
        String inputString = "123";
        generatePermutations(inputString.toCharArray(), 0, inputString.length() - 1);
    }

    public static void generatePermutations(char[] s, int start, int end) {
        if (start == end) {
            System.out.println(new String(s));
        } else {
            for (int i = start; i <= end; i++) {
                char temp = s[start];
                s[start] = s[i];
                s[i] = temp;

                generatePermutations(s, start + 1, end);

                temp = s[start];
                s[start] = s[i];
                s[i] = temp;
            }
        }
    }
}
