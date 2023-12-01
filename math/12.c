#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    double slope = -5.0;
    double t1 = 5.0;
    double y1 = 50.0;

    fprintf(gnuplotPipe, "set xrange [0:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:100]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 5\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 10\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    for (double t = 0; t <= 10; t += 0.1) {
        double pt = slope * (t - t1) + y1;
        fprintf(gnuplotPipe, "%lf %lf\n", t, pt);
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
