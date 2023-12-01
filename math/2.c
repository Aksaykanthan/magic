#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot '-' with lines\n");
        for (int t = 0; t <= 10; t++) {
            fprintf(gnuplotPipe, "%d %d\n", t, 50);
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
