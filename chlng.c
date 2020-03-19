#include<stdio.h>
#include<stdlib.h>


int findNumbers(int *nums, int numsSize){int i,c,m,k=0;
    for(i=0;i<numsSize;i++)
    {   c=1;
        m=nums[i];

        while(m!=0)
        {
            m=m/10;
            c++;

        }

        if(c%2==0)
        {
           k++;
        }


    }
    return k;

}

int main()
{
    int nums[100],n,i,nm;
    printf("enter the number of elements in an array\n ");
    scanf("%d",&n);

    printf("enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);

    nm=findNumbers(nums[n],n);

    printf("%d",nm);
    return 0;

}
