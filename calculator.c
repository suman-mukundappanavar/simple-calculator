#include<stdio.h>

int main()
{
  int choice,n,i;
  float a,b, ans=0;
  printf("**********Simple calculator**********\n");
  printf("Make your choice: \n1. press '1' for addition\n2. press '2' for subtraction\n3. press '3' for multiplication\n4. press '4' for division\n");
  scanf("%d",&choice);
  if (choice==3 || choice== 4){
    printf("Enter operand 1:");
    scanf("%f",&a);
    printf("Enter operand 2:");
    scanf("%f",&b);
    switch(choice)
    {
       case 3: printf("%f",(a*b));
               break;
       case 4: printf("%f",(a/b));
               break;
  }
}
  else if (choice == 1 || choice == 2){
    printf("Enter the total number of operands: ");
    scanf("%d",&n);
    float arr[n];
    for (int i=0; i<n; i++)
  {
    printf("Enter operand %d: ",i);
    scanf("%f",&arr[i]);
    printf("\n");
  }
  switch(choice)
  {
    case 1: for(i=0; i<n; i++){
            ans = ans + arr[i];
          }
          printf("Answer: %f",ans);
          break;
    case 2: ans = arr[0];
          for(i=1; i<=n; i++){
            ans = ans - arr[i];
          }
          printf("Answer: %f",ans);
          break;
   }
 }
 else {
   printf("Invalid Input");
 }
}
