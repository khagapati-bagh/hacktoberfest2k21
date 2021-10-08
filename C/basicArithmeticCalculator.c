// basic arithmetic calculator + - * / %




#include <stdio.h>

int main() {
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf",first + second);
      break;
    case '-':
      printf("%.1lf", first - second);
      break;
    case '*':
      printf("%.1lf",first * second);
      break;
    case '/':
      printf("%.1lf",first / second);
      break;
    // If operator doesn't match any case constant
    default:
      printf("operator is not correct");
  }
  printf("\n");
  return 0;
}
