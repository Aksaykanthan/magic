package java;

import java.util.Arrays;
import java.util.Comparator;

public class Knn {
    public static double distance(double[] v1, double[] v2, int d) {
        double dis = 0;
        for (int i = 0; i < d; i++) {
            double x = v1[i] - v2[i];
            dis += x * x;
        }
        return Math.sqrt(dis);
    }

    public static void display(int[][] d1, int[][] d2) {
        for (int i = 0; i < d1.length; i++) {
            for (int j = 0; j < d1[i].length; j++) {
                System.out.print(d1[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();

        for (int i = 0; i < d2.length; i++) {
            for (int j = 0; j < d2[i].length; j++) {
                System.out.print(d2[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static String knnClassify(double[][] c1, double[][] c2, double[] p, int k) {
        
        double[][] allData = new double[c1.length + c2.length][3];
        for (int i = 0; i < c1.length; i++) {
            allData[i] = Arrays.copyOf(c1[i], c1[i].length);
        }
        for (int i = 0; i < c2.length; i++) {
            allData[i + c1.length] = Arrays.copyOf(c2[i], c2[i].length);
        }

        
        for (int i = 0; i < allData.length; i++) {
            allData[i][2] = distance(allData[i], p, 2);
        }

        
        Arrays.sort(allData, Comparator.comparingDouble(point -> point[2]));

        
        int countC1 = 0;
        int countC2 = 0;
        for (int i = 0; i < k; i++) {
            if (i < c1.length) {
                countC1++;
            } else {
                countC2++;
            }
        }

        
        if (countC1 > countC2) {
            return "Class 1";
        } else {
            return "Class 2";
        }
    }

    public static void main(String[] args) {
        double[][] c1 = { { 1, 2 }, { 1, 1 }, { 2, 3 }, { 4, 3 }, { 3, 2 }, { 4, 1 }, { 2, 4 } };
        double[][] c2 = { { 6, 9 }, { 10, 10 }, { 7, 8 }, { 6, 8 }, { 7, 9 }, { 10, 6 }, { 7, 7 } };
        double[] p = { 2, 1 };
        int k = 3; 

        System.out.println("Classifying new point using KNN:");
        String result = knnClassify(c1, c2, p, k);
        System.out.println("Predicted Class: " + result);
    }
}
