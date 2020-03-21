#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 정수 a, b 사이에 속한 모든 정수의 합을 리턴하는 함수 완성
// 두 정수가 같다면 둘 중 아무 수나 리턴
// a, b 대소관계 없음

long long solution(int a, int b) {
  long long answer = 0;
  
  if(a > b)
    for(int i=b; i<=a; i++)
      answer += i;


  else if(b > a)
    for(int i=a; i<=b; i++)
      answer += i;


  else if(a == b)
    answer = a;
  
  return answer;
}
