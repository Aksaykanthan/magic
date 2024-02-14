package java;

public class permute {
    public static void main(String[] args) {
        // int m = 6,n=5;
        String s = "aaa";
        genPermutation(s.toCharArray(), 0, s.length() - 1);
    }

    public static void genPermutation(char[] s, int start, int end) {
        if (start == end) {
            System.out.println(new String(s));
        } else {
            for (int i = start; i <= end; i++) {
                if(s[start]==s[i] && i!=start){
                    continue;
                }

                char temp = s[start];
                s[start] = s[i];
                s[i] = temp;

                genPermutation(s, start + 1, end);

                temp = s[start];
                s[start] = s[i];
                s[i] = temp;
            }
        }
    }
}