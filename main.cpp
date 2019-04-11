//
//  main.cpp
//  homework12
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int v,b,n;
    int a=8;
    
    for(v=a;v>=1;v--){
        for(b=a;b>v;b--){
            printf(" ");
        }
        for(n=1;n<=v;n++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    system("PAUSE");
    return 0;
}
