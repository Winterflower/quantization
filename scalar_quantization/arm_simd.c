#include <stdio.h>
#include <arm_neon.h>

int add(int a, int b){
    return a+b;

}

int main(void){
    printf("hello world");
    int sum;
    int a = 5;
    int b = 10;
    sum = add(a, b);
    printf("sum is %d \n", sum);

    int array_a[4] = {1, 2, 3, 4};
    int array_b[4] = {10, 11, 12, 13};
    int result_array[4];
    int simd_result[4];
    int len_array = 4;
    for (int i=0;i<len_array;i++){
    result_array[i] = array_a[i] + array_b[i];

    int32x4_t first_lane = vld1q_s32(array_a+0*4);
    int32x4_t second_lane = vld1q_s32(array_b+0*4);

    int32x4_t result_lane =  vaddq_s32(first_lane, second_lane);
    vst1q_s32(simd_result, result_lane);
    


}
    return 0;

}
