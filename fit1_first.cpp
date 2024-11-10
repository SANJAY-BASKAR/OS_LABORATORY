#include <stdio.h>
#include <stdlib.h>


//find the first block that fits process

void first(int blocks[], int m, int processes[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //condition check (block[j] >= process[i]
                //then print i+1, j+1   (process, allocation to block)
            //blocks[j] -= processes[i]
        }
    }
}

int main() {
    int blocks[] = {100, 200, 300, 400, 500};
    int m = sizeof(blocks);
    int processes[] = {212, 417, 112, 429};
    int n = sizeof(processes);

    first(blocks, m, processes, n); // call function
    return 0;
}





















































































































































