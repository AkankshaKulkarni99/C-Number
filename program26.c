// question = Accept one number from user and display addition of  factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;       // loop sathi varaiable tyar kela
    int iSum = 0;   // addition lakshat thevnya sathi

    if(iNo < 0)        //updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;

    int iRet = 0;                  // iSum je denar tya sathi pishvi

    printf("Enter number : \n");
    scanf("%d",&iValue);

    SumFactors(iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors is : %d\n",iRet);


    return 0;
}