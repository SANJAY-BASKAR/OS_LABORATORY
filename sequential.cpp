#include <stdio.h>
#include <stdlib.h>

struct File {    //create structure with start_block and length
    int start_block;
    int length;
};

void allocateSequence(struct File files[], int n){ // function for the call of sequential allocation // print 4 values
    for(int i=0; i < n; i++){                      // first for loop print three items
        //print i+1, files[i].start_block, files[i].length   (File , Start, Length)
        for(int j=0; j < files[i].length; j++){    // second for loop run till file length
            //print files[i].start_block+j                    (Block)
        }
            // give next line
    }
}


int main(){
    struct File files[] = { {10, 4},{20, 4}, {30, 2}};
    int n = sizeof(files)/ sizeof(files[0]);  // get file size by total file size divide by first file [0] size
    allocateSequence(files, n);               // pass parameter of structure object and number n (average)
    return 0;
}
