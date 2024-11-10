#include <stdio.h>
#include <stdlib.h>

struct File {
    int index_block;
    int blocks[10];
    int length;
};

void allocate(struct File files[], int n){
    for(int i=0; i<n; i++){
        //print i+1, files[i].index_block       (  File , index )
        for(int j=0; j<n; j++){
            // print files[i].blocks[j]
        }
        //next line
    }
}

int main(){
    int n =3;
    struct File files[] = {{100, {101, 102, 103},3}};
    allocate(files, n);
    return 0;
}

