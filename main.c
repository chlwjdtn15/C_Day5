#include <stdio.h>
// 문제 : 입력받은 2가지 정수 사이에 존재하는 3의 배수 중에서 홀수의 합을 리턴하는 함수 구현



// // 어떤수가 홀수인지 아닌지 체크하는 함수
// int is_odd(int num) {

//   if(num % 2 == 0) {
//     return 1; //짝수
//   }
//   // num이 홀수 ?? 짝수??
//   return 0; //홀수
// }

// // 어떤수가 3의 배수인지 아닌지 체크하는 함수
// int is_three_multiple(int num) {


//   if(num % 3 == 0) {
//     return 1; //3의 배수
//   }

//   return 0; //3의 배수가 아님
// }

// // is_odd와 is_three_multiple 이용해서 완성해주세요.
// int get_sum(int n, int m) {
//   int sum = 0;
//   for (int i = n; n <= m; n++) { //첫번쨰 와 두 번째 수 사이에 있는 수들 구하기

//       if(is_three_multiple(n) == 1) //만약에 3의 배수가 맞다면
//       {
//         if(is_odd(n) == 0){ //만약에 홀수가 맞다면
//           sum += n; //수들 더하기
//         }
//       }


//   } 

//   return sum;
// }





// 문제 : 어떤 수가 소수이 판별해주는 함수 is_prime_number를 만들고 이를 이용해 1부터 n 사이의 수 중에서 소수의 합을 반환하는 함수 `get_1_to_n_prime_numbers_sum` 를 구현해주세요.

//number가 소수이면 1을 리턴, 소수가 아니면 0을 리턴
int is_prime_number(int number) {
}

// 1부터 n 사이의 수 중에서 소수의 합 반환하는 함수
int get_1_to_n_prime_numbers_sum(int n) {

  int sum = 0;

  return sum;
}






int main(void) {
  
  // printf("결과 : %d\n", get_sum(50, 100));
  // // 출력 => sum += i;


    int sum;
  int number;

  number = 1000;
  sum = get_1_to_n_prime_numbers_sum(number);
  printf("1부터 %d사이에 존재하는 소수의 합 : %d\n", number, sum);
  // 출력 => 1부터 1000사이에 존재하는 소수의 합 : 76127

  number = 2000;
  sum = get_1_to_n_prime_numbers_sum(number);
  printf("1부터 %d사이에 존재하는 소수의 합 : %d\n", number, sum);
  //출력 => 1부터 2000사이에 존재하는 소수의 합 : 277050

  return 0;
}