#include "stdlib.h"
#include "stdio.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "unistd.h"
#include "time.h"
#define BLOCK 1024*1024
float *data;
int float_cmp(const void *a, const void *b){
    return *(float *)a > *(float *)b ? 1 : -1;
}

int main(int argc, char* argv[]){
    /**
    int data_size;
    int i,j;
    double cost;
    if(argc < 3) {
        printf("Usage:%s data_faile, data_size\n",argv[0]);
        return -1;
    }
    data_size = atoi(argv[2]);
    printf("the data size %d\n",data_size);
    int handle;
    handle = open(argv[1],O_RDONLY);
    printf("the handle %d\n",handle);
    if(handle == -1){
        printf("Cannot Open file %s\n",argv[2]);
        return -1;
    }
    data = (float *)malloc(sizeof(float)*BLOCK*data_size);
    printf("malloc space for data success!\n");
    read(handle,data,BLOCK*data_size*sizeof(float));
    printf("read success!\n");
    clock_t start_time = clock();
    qsort(data, data_size*BLOCK, sizeof(float),float_cmp);
    clock_t end_time = clock();
    cost = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Finished Sort \n");
    printf("the firt num is :%f, the last num is :%f, the cost is %f \n",data[0],data[data_size*BLOCK-1],cost);
    close(handle);
    free(data);
    **/
    float *test;
    test = (float *)malloc(sizeof(float)*5);
//    for(int i = 0; i < 5; i++){
//        test[i] = (float)i+0.8;
//    }
    test[0] = 0.0;
    test[1] = 0.9;
    test[2] = 0.87;
    test[3] = 0.99;
    test[4] = 0.56;
    qsort(test,5,sizeof(float),float_cmp);
    for(int i = 0 ;i < 5; i++){
        printf("number %d : %f \t",i,test[i]);
    }
    printf("\n");
}