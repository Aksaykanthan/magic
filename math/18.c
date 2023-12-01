#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        printf("Error opening gnuplot\n");
        return 1;
    }

    fprintf(gnuplotPipe, "set xrange [0:10]\n"); // Set x-axis range
    fprintf(gnuplotPipe, "set yrange [0:100]\n"); // Set y-axis range
    fprintf(gnuplotPipe, "set xtics 1\n"); // Set x-axis scale
    fprintf(gnuplotPipe, "set ytics 10\n"); // Set y-axis scale
    fprintf(gnuplotPipe, "plot '-' with lines\n");

    for (int t = 0; t <= 10; t++) {
        double pt = 15 + 8 * t;
        fprintf(gnuplotPipe, "%d %lf\n", t, pt);
    }

    fprintf(gnuplotPipe, "e\n");

    pclose(gnuplotPipe);
    return 0;
}
