#include <stdio.h>
#include <stdlib.h>

void bestFit(int blocks[], int m, int processes[], int n){
    for(int i=0; i<n; i++){
        int BestIdx = -1;
        for(int j=0; j<m; j++){
            if(blocks[j] >= processes[i] && (BestIdx == -1 || blocks[j]< blocks[BestIdx])){
                BestIdx = j;
            }
        }

        if(BestIdx != -1){
            //print i+1, bestIndx+1
            blocks[BestIdx] -= processes[i];
        }
    }
}

int main(){
    int blocks[] = {100, 500, 200, 300, 600};
    int processes[] = {212, 417, 112, 429};

    bestFit(blocks, 5, processes, 4);
}