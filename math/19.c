#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    fprintf(gnuplotPipe, "set xrange [-5:5]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [-35:5]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 1\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 5\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    double t = -5.0;
    while (t <= 5.0) {
        double pt = -10 - 5 * t;
        fprintf(gnuplotPipe, "%lf %lf\n", t, pt);
        t += 0.1;
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
