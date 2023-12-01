#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot '-' with lines\n");
        for (int t = 0; t <= 20; t++) {  // Adjust the range as needed
            int p = -7 * t + 100;
            fprintf(gnuplotPipe, "%d %d\n", t, p);
        }
        fprintf(gnuplotPipe, "e\n");
        fflush(gnuplotPipe);
        printf("Press enter to exit...");
        getchar();
        pclose(gnuplotPipe);
    } else {
        fprintf(stderr, "Could not open Gnuplot pipe.\n");
    }

    return 0;
}
