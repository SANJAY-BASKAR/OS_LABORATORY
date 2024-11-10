#include <stdio.h>

void lfu(int pages[], int n, int frames) {
    int frame[frames], freq[frames], faults = 0;

    for (int i = 0; i < frames; i++) frame[i] = -1, freq[i] = 0;

    for (int i = 0; i < n; i++) {
        int found = -1;
        for (int j = 0; j < frames; j++)
            if (frame[j] == pages[i]) { found = j; break; }

        if (found == -1) { // Page fault
            int lfu_index = 0;
            for (int j = 1; j < frames; j++)
                if (freq[j] < freq[lfu_index]) lfu_index = j;
            frame[lfu_index] = pages[i];
            freq[lfu_index] = 1;
            faults++;
        } else freq[found]++;
    }
    printf("Page Faults: %d\n", faults);
}

int main() {
    int pages[] = {1, 3, 0, 3, 5, 6};
    lfu(pages, 6, 3);
    return 0;
}