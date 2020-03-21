#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//정수를 담고 있는 배열 arr의 평균값을 return 하는 함수, solution을 완성해라

double solution(int arr[], size_t arr_len) { //size_t는 부호 없는 정수 타입
  double answer = 0; //배열 속 데이터들의 총 합을 담을 변수

  for(int i=0; i<arr_len; i++) {
    answer += arr[i];
  }
  answer /= arr_len;

  return answer;
}
