#include <stdio.h>

void fcfs(int pages[], int n, int frames){
    int frame[frames];
    int index = 0;
    int faults = 0;

    for(int i=0; i < n; i++){ // this loop contains complete function
        int found =0;
        for(int j=0;j< frames; j++){
            if(frames[j] == pages[i]){
                found=1;
                break;
            }
            if(!found){
                frame[index]=pages[i];
                index = (index + 1) % frames;
                faults++;
            }
        }
        //print faults
    }
}

int main() {
    int pages[] = {1, 3, 0, 3, 5, 6};
    fcfs(pages, 6, 3);
    return 0;
}