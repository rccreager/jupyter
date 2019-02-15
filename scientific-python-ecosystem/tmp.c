
#include <math.h>
void runs_in_c(int N, double* p, double* px, double* py, double* pz) {
    int i;
    for (i = 0;  i < N;  i++) {
        p[i] = sqrt(px[i]*px[i] + py[i]*py[i] + pz[i]*pz[i]);
    }
}