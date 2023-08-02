// accept one  number from user and checkweather perfect number or not ?
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;       // loop sathi varaiable tyar kela
    int iSum = 0;   
    // addition lakshat thevnya sathi

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
bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);
    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    bool bRet = false;                 

    printf("Enter number : \n");
    scanf("%d",&iValue);

    SumFactors(iValue);


    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }
   


    return 0;
}