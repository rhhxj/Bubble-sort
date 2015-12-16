//
//  main.cpp
//  Bubble sort
//
//  Created by 20141105047 on 15/12/16.
//  Copyright (c) 2015年 20141105047. All rights reserved.
//

#include <iostream>
#define N 5

int main()
{
    int a[N];
    int i,j,temp;
    for (i=0;i<N;i++)
        scanf("%d",&a[i]);
    for (i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (i=0;i<N ;i++)
        printf("%d\n",a[i]);
    return 0;
}