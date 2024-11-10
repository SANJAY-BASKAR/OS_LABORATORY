#include <stdio.h>

void roundrobin(int n, int burst[], int quantum){
    int rem[n];
    int wait =0;
    int time = 0;
    for(int i=0; i<n; i++){// method completes inside single for loop itself
        while(1){
            int done = 1;
            for (int i=0; i<n; i++){
                if(rem[i] > 0){
                    done = 0;
                    if(rem[i] > quantum){
                        time +=quantum;
                        rem[i] -= quantum;
                    }else{
                        time += rem[i];
                        wait = time - burst[i];
                        //print up same as formatted in last two
                        //i+1, burst time, wait , time
                        rem[i]=0;
                    }
                }
            }
            if(done) break;
        }
    }
}

int main(){
    int burst[] ={4, 3, 2, 6};
    int n = 4, quantum = 2;
    roundrobin(n, burst, quantum);
    return 0;
}