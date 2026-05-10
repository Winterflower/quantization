#include <stdio.h>

float compute_min(float *arr, int length){
    float min_elt;
    for (int i=0; i<length; i++){
        if (i==0){
            min_elt = arr[i];
        }
        else {
            if (arr[i]>=min_elt){
                min_elt=arr[i];
            }
        }

    }
    return min_elt;

}

float compute_max(float *arr, int length){
    
}

int main(void) {
    float arr[4] = {1.234f, 2.345f, -0.123f, 5.60f};
    float min_elt = compute_min(&arr[0], 4);
    printf("%f\n", min_elt);
    for (int i=0; i<4; i++){
        int result = arr[i]-(-0.123);
    }
    return 0;
}
