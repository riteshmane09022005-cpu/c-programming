#include<stdio.h>
int Divide (int ino1,int ino2)
{
    int iAns = 0;

    if (ino2 == 0  )
    {

        return -1;
    }
    iAns = ino1 / ino2;

    return iAns;

}
int main()
{
    int ivalue1=15, ivalue2 = 5;

    int iRent = 0;

    iRent=Divide(ivalue1,ivalue2);

    printf("Division id : %d\n",iRent);


    return 0;
}