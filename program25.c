// question = Accept one number from user and display addition of  factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;       // loop sathi varaiable tyar kela
    int iSum = 0;    // addition lakshat thevnya sathi

    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  //ino chya ppudhe
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;        // function isum return krnar
}

int main()
{
    int iValue = 0;

    int iRet = 0;                  // iSum je denar tya sathi pishvi

    printf("Enter number : \n");
    scanf("%d",&iValue);

    SumFactors(iValue);                  //function call 

    iRet = SumFactors(iValue);

    printf("Summation of factors is : %d\n",iRet);


    return 0;
}