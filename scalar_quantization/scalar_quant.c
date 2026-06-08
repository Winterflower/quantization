#include <stdio.h>
#include <stdint.h>

float compute_min(float *arr, int length){
    float min_elt;
    for (int i=0; i<length; i++){
        if (i==0){
            min_elt = arr[i];
        }
        else {
            if (arr[i]<=min_elt){
                min_elt=arr[i];
            }
        }

    }
    return min_elt;

}

float compute_max(float *arr, int length){
    float max_elt;
    for (int i=0; i<length; i++){
        if (i==0){
            max_elt=arr[i];
        }
        else {
            if (arr[i]>=max_elt){
                max_elt=arr[i];
            }
        }
    }
    return max_elt;
}

int8_t scalar_quantize(float value, int bucket, float min, float max){
    float result = value - min;
    float intervals = bucket/(max-min);
    float final_result = intervals*result;
    return (int8_t)final_result;

}

  void print_float_array(float *arr, int n) {
      for (int i = 0; i < n; i++) {
          printf("%f ", arr[i]);
      }
      printf("\n");
  }

int main(void) {
    float arr[4] = {1.234f, 2.345f, -0.123f, 5.60f};
    float min_elt = compute_min(&arr[0], 4);
    printf("%f\n", min_elt);
    float max_elt = compute_max(&arr[0], 4);
    printf("%f\n", max_elt);
    int8_t quantized_arr[4];
    for (int i=0; i<4; i++){
        quantized_arr[i] = scalar_quantize(arr[i], 127, min_elt, max_elt);
    }
    int8_t quantized = scalar_quantize(arr[0], 127, min_elt, max_elt);
    printf("%d\n", (int)quantized);
    return 0;
}
