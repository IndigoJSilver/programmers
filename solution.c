#include <stdio.h>
#include <stdbool.h> // true, false
#include <stdlib.h> //malloc
#include <string.h> //strlen

// 단어의 가운데 글자 가져오기

char* solution(const char* s) {
  int len = strlen(s); //문자열 길이
  char* answer;

  if(len % 2){ //값이 1이라면 홀수, 0이라면 짝수 즉 else
    answer = (char*)malloc(sizeof(char)); // 1바이트 만큼 동적 메모리 할당
    answer[0] = s[len/2];
  }
  else{// 짝수
    answer = (char*)malloc(sizeof(char)*2);
    answer[0] = s[len/2-1];
    answer[1] = s[len/2];
  }
  return answer;

}
