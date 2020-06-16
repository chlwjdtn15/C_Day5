#include <stdio.h>
// 문제 : 입력받은 2가지 정수 사이에 존재하는 3의 배수 중에서 홀수의 합을 리턴하는 함수 구현



// 어떤수가 홀수인지 아닌지 체크하는 함수
int is_odd(int num) {

  if(num % 2 == 0) {
    return 1; //짝수
  }
  // num이 홀수 ?? 짝수??
  return 0;
}

// 어떤수가 3의 배수인지 아닌지 체크하는 함수
int is_three_multiple(int num) {


  if(num % 3 == 0) {
    return 1; //3의 배수
  }

  return 0;
}

// is_odd와 is_three_multiple 이용해서 완성해주세요.
int get_sum(int n, int m) {
  int sum = 0;
  for (int i = n; n <= m; n++) {

      if(is_three_multiple(n) == 1)
      {
        if(is_odd(n) == 0){
          sum += n;
        }
      }


  } 

  return sum;
}


int main(void) {
  
  printf("결과 : %d\n", get_sum(50, 100));
  // 출력 => sum += i;

  return 0;
}