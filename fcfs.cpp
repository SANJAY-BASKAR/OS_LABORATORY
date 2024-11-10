#include <stdio.h>
#include <stdlib.h>

void fcfs(int n, int burst[]){
    int wait = 0;
    int turn = 0;
    for(int i=0; i<n; i++){
        turn = wait + burst[i];
        //print  i+1, burst[i], wait, turn  (Process, Burst, Wait, TurnaroundTime)
        wait += burst[i];
    }
}


int main(){
    int burst[] = {4, 3, 2, 6};
    int n = 4;
    fcfs(n, burst);
    return 0;
}
