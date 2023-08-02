// accept one number and we hav to calculate factorial number
//updator
#include<stdio.h>


unsigned long int Factorial(int iNo)
{
  int iFact = 1;
  unsigned long int iCnt = 0;

  if(iNo < 0)       //updator 
  {
    iNo = -iNo;
  }

  for(iCnt = iNo; iCnt >= 1; iCnt--)
  {
    iFact = iFact * iCnt;
  }
  return iFact;

}
int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;
 
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);


    return 0;
}