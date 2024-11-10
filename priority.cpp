#include <stdio.h>
#include <stdlib.h>

void priority(int n, int burst[], int prior[]){

    int wait = 0;
    int turn = 0;
    int temp;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(prior[i] > prior[j]){
                swap(prior[i], prior[j]);

                swap(burst[i], burst[j]);
            }
        }
    }
    //////////////////////////////////////////////////////////////////////
    for(int i=0; i<n; i++){
        turn = wait + burst[i];
        //print  i+1, burst[i], wait, turn  (Process, Burst, Wait, TurnaroundTime)
        wait += burst[i];
    }
    //////////////////////////////////////////////////////////////////////
}


int main(){
    int burst[] = {4, 3, 2, 6};
    int n = 4;
    int prior[] = {1,2,3,4};
    priority(n, burst, prior);
    return 0;
}
