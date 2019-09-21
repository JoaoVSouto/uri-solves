#include <stdio.h>

typedef struct {
  int *ptr1;
  int *ptr2;
} Registro;

int main() {
  int i = 100;
  Registro reg, *reg_ptr;

  reg.ptr1 = &i;
  reg_ptr = &reg;
  *reg.ptr1 = 35;
  *(*reg_ptr).ptr1 = *reg.ptr1 / 7;
  *reg_ptr->ptr1 = *reg_ptr->ptr1 + 5;

  printf("%d, %d, %d, %d\n", i, *reg.ptr1, *(*reg_ptr).ptr1, *reg_ptr->ptr1);

  return 0;
}
