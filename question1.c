#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int find_min_step(int a, int b) {
    int row1 = (int)(sqrt(8 * a + 1) - 1) / 2;
    int row2 = (int)(sqrt(8 * b + 1) - 1) / 2;
    int min_step = abs(row1 - row2);
    return min_step;
}

int main() {
    int t;
    scanf("%d", &t);

    int *res = (int *)malloc(t * sizeof(int));

    for (int i = 0; i < t; i++) {
        int arr[2];
        scanf("%d %d", &arr[0], &arr[1]);
        res[i] = find_min_step(arr[0], arr[1]);
    }

    for (int i = 0; i < t; i++) {
        printf("#%d %d\n", i+1, res[i]);
    }

    free(res); // 동적 할당 해제
    return 0;
}
