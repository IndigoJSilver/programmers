#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//길이가 n이고 수박수박수박수...와 같은 문자열을 리턴하는 함수 완성
//ex) n이 4면 수박수박 리턴, 3이면 수박수 리턴

char* solution(int n) {
  char* answer = (char*)malloc(sizeof(char)*(n*3)+1); //n은 글자수, 한글은 3바이트 + "/0"

//짝수에 "수", 홀수에 "박"  
  for(int i=0; i<n; i++) {
    if(i%2==0)
      strcpy(answer + (i*3), "수");
    else
      strcpy(answer + (i*3), "박");
  }
  
  return answer;
}
