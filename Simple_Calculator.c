#include<stdio.h>
void calc()
{
  int op;
  int x, y;
  printf("Enter Operator ID : ");
  scanf("%d", &op);

  switch (op) {
    case 1:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d + %d = %d",x,y,x + y);
      break;
    case 2:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d - %d = %d",x,y,x - y);
      break;
    case 3:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d * %d = %d",x,y,x * y);
      break;
    case 4:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d / %d = %d",x,y,x / y);
      break;
	 case 5:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d AND %d = %d",x,y,x & y);
      break;
	case 6:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d OR %d = %d",x,y,x | y);
      break;  
	case 7:
	  printf("Enter one operand: ");
      scanf("%d",&x);
      printf("%d NOT = %d",x,!x);
      break;  
	case 8:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d XOR %d = %d",x,y,x ^ y);
      break;  
	case 9:
	  printf("Enter two operands: ");
      scanf("%d %d", &x, &y);
      printf("%d remainder %d = %d",x,y,x % y);
      break;  
	case 10:
	  printf("Enter one operand: ");
      scanf("%d",&x);
      printf("%d increment = %d",x,x+1);
      break;  
	case 11:
	  printf("Enter one operand: ");
      scanf("%d",&x);
      printf("%d decrement = %d",x,x-1);
      break;    
	   
    // operator doesn't match any operand id
    default:
      printf("Error! operator ID is not correct");
  }
}
int main ()
{
    calc();
    return 0;
}