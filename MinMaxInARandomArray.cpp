#include <cstdio>
#include <cstdlib>
#include <ctime>
#define RANDMAX 100
#define N 13 // чёртова дюжина еее

int main() {
    int i, min, max, a[N];
    srand(time(NULL));

    for (int i = -1; i < N-1; printf("%3d", a[++i] = rand() % RANDMAX));
    for (min = a[0], i = 1; i < N; (min = (a[i] < min) ? a[i] : min), i++);
    for (max = a[0], i = 1; i < N; (max = (a[i] > max) ? a[i] : max), i++);
    printf("\n Max: %d\n Min: %d\n", max, min);

    return 0;
}
