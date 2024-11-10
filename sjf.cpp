#include <stdio.h>
#include <stdlib.h>

void sjf(int n, int burst[]){
    int wait = 0;
    int turn = 0;
    int temp;  // new variable
    for(int i=0; i<n; i++){  // this double loop is extra from fcfs
        for(int j=0; j<n; j++){
            if(burst[i] > burst[j]){
                //swap(burst[i],burst[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        turn = wait + burst[i];
        //print  i+1, burst[i], wait, turn  (Process, Burst, Wait, TurnaroundTime)
        wait += burst[i];
    }
}


int main(){
    int burst[] = {4, 3, 2, 6};
    int n = 4;
    sjf(n, burst);
    return 0;
}