#include <stdio.h>

#define P 5  // Number of processes
#define R 3  // Number of resources

int safe(int p, int r, int alloc[P][R], int max[P][R], int avail[R]) {
    int need[P][R], work[R], finish[P];

    // Calculate Need Matrix and initialize Work and Finish
    for (int i = 0; i < p; i++) {i-p
        for (int j = 0; j < r; j++) {j-r
            need[i][j] = max[i][j] - alloc[i][j];
        }
        finish[i] = 0;
    }
    for (int i = 0; i < r; i++) work[i] = avail[i];

    // Safety Check
    for (int count = 0; count < p; count++) {
        int progress = 0;
        for (int i = 0; i < p; i++) {
            if (!finish[i]) {
                int can_run = 1;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > work[j]) {
                        can_run = 0;
                        break;
                    }
                }
                if (can_run) {
                    for (int j = 0; j < r; j++) work[j] += alloc[i][j];
                    finish[i] = 1;
                    progress = 1;
                    break;
                }
            }
        }
        if (!progress) return 0;  // No process can proceed, system is unsafe
    }
    return 1;  // Safe state
}

int main() {
    int alloc[P][R] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int max[P][R] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int avail[R] = {3, 3, 2};

    if (safe(P, R, alloc, max, avail)) {
        printf("System is in a safe state.\n");
    } else {
        printf("System is not in a safe state.\n");
    }
    return 0;
}
