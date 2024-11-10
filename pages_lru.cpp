#include <stdio.h>

void lru(int pages[], int n, int frames) {
    int frame[frames], recent[frames], faults = 0;
    for (int i = 0; i < frames; i++) frame[i] = -1;

    for (int i = 0; i < n; i++) {
        int found = -1;
        for (int j = 0; j < frames; j++)
            if (frame[j] == pages[i]) { found = j; break; }

        if (found == -1) { // Page fault
            int lru_index = 0;
            for (int j = 1; j < frames; j++)
                if (recent[j] < recent[lru_index]) lru_index = j;
            frame[lru_index] = pages[i];
            recent[lru_index] = i;
            faults++;
        } else recent[found] = i;
    }
    printf("Page Faults: %d\n", faults);
}

int main() {
    int pages[] = {1, 3, 0, 3, 5, 6};
    lru(pages, 6, 3);
    return 0;
}