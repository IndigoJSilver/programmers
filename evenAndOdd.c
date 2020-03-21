#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//정수 num이 짝수일 경우 even 반환, 홀수인 경우 odd 반환하는 함수 완성

char* solution(int num) {
  char* answer = (char*)malloc(sizeof(char)*5);// "e"+"v"+"e"+"n"+"/0" = 5
  
  if(num % 2)
    answer = "Odd";
  else
    answer = "Even";

  return answer;
}
