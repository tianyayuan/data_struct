//
//  main.c
//  _list_
//
//  Created by 王鑫磊 on 5/10/16.
//  Copyright © 2016 wang. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include "list.h"

struct Node
{
    int Element;
    Position Next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}










int IsEmpty(List L)//测试一个链表是否是空表
{
    return L->Next==NULL;
}
int IsLast(Position P,List L)//测试当前位置是否为链表的末尾
{
    return P->Next==NULL;
}
Position Find(int x,List L)//Find例程
{
    Position P;
    P=L->Next;
    while (P!=NULL&&P->Element!=x) {
        P=P->Next;
    }
    return P;
}
Position FindPrevious(int x,List L)//找出x的前驱元素，与Delete一起使用
{
    Position P;
    P=L;
    while (P->Next!=NULL&&P->Next->Element!=x) {
        P=P->Next;
    }
    return P;
}
void Delete(int x,List L)//删除链表中的x元素
{
    Position P,TmpCell;
    P=FindPrevious(x, L);
    if (!IsLast(P, L)) {
        TmpCell=P->Next;
        P->Next=TmpCell->Next;
        free(TmpCell);
    }
}
void Insert(int x,List L,Position P)//链表的插入例程
{
    Position TmpCell;
    TmpCell=malloc(sizeof(struct Node));
    /*if (TmpCell==NULL) {
        FatalError("Out of space!!!");
    }*/
    TmpCell->Element=x;
    TmpCell->Next=P->Next;
    P->Next=TmpCell;
}
void DeleteList(List L)//删除表
{
    Position P,Tmp;
    P=L->Next;
    L->Next=NULL;
    while (P!=NULL) {
        Tmp=P->Next;
        free(P);
        P=Tmp;
    }
}
List MakeEmpty(List L)//
{
    
}
