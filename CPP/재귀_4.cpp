#include <cstdio>

void fibonacci(int N, int a, int b, int x) {

	if (N == 1) {
		printf("%d %d\n", a, b);
	}
	else {
		fibonacci(N - 1, a, x, b);
		fibonacci(1, a, b, x);
		fibonacci(N - 1, x, b, a);
	}
}

int main() {
	int num = 0;
	scanf("%d", &num);

	int cnt = 1;
	for (int i = 0; i < num; i++) {
		cnt *= 2;
	}
	printf("%d\n", cnt - 1);
	fibonacci(num, 1, 3, 2);
}

