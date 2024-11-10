#include <stdio.h>
#include <stdlib.h>

void worst(){ //same parameter blocks m processes n
    for(int i=0; i<5; i++){
        int worstIdx = -1;
        for(int j=0; j<4; j++){
            if(blocks[j] >= processes[i] && (worstIdx == -1 || blocks[j] > blocks[worstIdx])){
                worstIdx=j;
            }
        }
        if(worstIdx != -1){
            //print i+1, worstIdx +1    (process, allocated_block)
            blocks[worstIdx] -=processes[i];
        }
    }

}

int main(){
    //same as best and first fit
}