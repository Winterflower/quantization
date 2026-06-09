#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){

    // why use uint_32 - constantly 4 bytes regardless of platform implementation
    int len_array = 1024;

    int total_runs = 1000000;
    
    for(int i=0; i<total_runs;i++){
    uint32_t first_array[len_array];
    uint32_t second_array[len_array];
    uint32_t result_array[len_array];

    //testing arcrandom generation 
    uint32_t random_int = arc4random();
    //printf("%d is a random_int\n", random_int);

    for(int i=0; i<len_array; i++){
      first_array[i]=arc4random();
      second_array[i]=arc4random();
}

    for(int i=0; i<len_array; i++){
      result_array[i]=first_array[i]+second_array[i];

}
    }




}
