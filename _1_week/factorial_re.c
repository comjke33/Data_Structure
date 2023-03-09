#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//factorial를 계산하는 프로그램
//3! = 3*2*1

//recursion을 이용해서 factorial를 계산해보자
//recursion : 함수가 자기 자신을 호출하는 것.

void function_a(void) {
	function_a();
}

//인수 n을 받아서, n!을 계산해서 반환
int factorial(int n) {
	//항상 recursion에는 탈출조건이 있어야함.
	//탈출조건
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main(void) {
	//이렇게 쓰면 3이라는 숫자를 저장할 임시 저장소가 만들어짐.
	//그리고 factorial함수를 거친 후 2를 저장할 임시 저장소가 또 만들어짐.
	//숫자가 커지면 저장소가 부담스러움. -> recursion의 단점
	int k = factorial(3);
	printf("%d factorial은 %d입니다. \n", 3, k);
	return 0;
}