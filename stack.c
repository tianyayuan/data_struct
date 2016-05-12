//
//  main.c
//  stack
//
//  Created by 王鑫磊 on 5/10/16.
//  Copyright © 2016 wang. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

#include "stack.h"
struct Node{
    int Element;
    PtrToNode Next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}

int IsEmpty(Stack S)//测试栈是否为空
{
    return S->Next==NULL;
}

Stack CreateStack(void)
{
    Stack S;
    S=malloc(sizeof(struct Node));
    if (S==NULL) {
        FatalError("Out of space!!!");
    }
    S->Next==NULL;
    MakeEmpty(S);
    return S;
}
void makeEmpty(Stack S)
{
    if (S==NULL) {
        Error("Must use CreateStack first");
        
    }else
        while (!IsEmpty(S)) {
            pop(S);
        }
}

int Top(Stack S)//返回栈顶元素的例程
{
    if (!IsEmpty(S)) {
        return S->Next->Element;
    }
    Error("Empty stack");
    return 0;
}

void pop(Stack S)
{
    PtrToNode FirstCell;
    if (IsEmpty(S)) {
        Error("Empty stack");
    }else
    {
        FirstCell=S->Next;
        S->Next=S->Next->Next;
        free(FirstCell);
    }
}

