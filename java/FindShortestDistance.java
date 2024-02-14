package java;

public class FindShortestDistance {
    public static double distance(double[] v1, double[] v2,int d) {
        double dis = 0;
        for (int i = 0; i < d; i++) {
            double x = v1[i] - v2[i];
            dis += x * x;
        }
        return Math.sqrt(dis);
    }

    public static void main(String[] args) {
        double [][] points = {{1,2},{1,1},{2,3},{6,5}};
        double min_dis = distance(points[0], points[1],2);
        for (int i = 0; i < points.length - 1; i++){
            for (int j = i+1; j < points.length; j++){
                double d = distance(points[i], points[j],2);
                if (d < min_dis && i != j){
                    d = min_dis;
                }
            }
        }
        System.out.println(min_dis);
    }
}
