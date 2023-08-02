// accept 2 number from user and base and power
#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
   ULONG iResult = 1;    //multiplication

    if((iBase < 0) || (iPower < 0))        //filter
    {
        return 0;
    }
    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);             //2

    printf("Enter power : \n");
    scanf("%d",&iValue2);            //5
    
    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %d\n",iRet);

    

   
    return 0;
}