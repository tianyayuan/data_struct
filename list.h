//
//  list.h
//  _list_
//
//  Created by 王鑫磊 on 5/10/16.
//  Copyright © 2016 wang. All rights reserved.
//

#ifndef list_h
#define list_h
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);//
int IsEmpty(List L);//测试一个链表是否是空表
int IsLast(Position P,List L);//测试当前位置是否为链表的末尾
Position Find(int x,List L);//Find例程
Position FindPrevious(int x,List L);//找出x的前驱元素，与Delete一起使用
void Delete(int x,List L);//删除链表中的x元素
void Insert(int x,List L,Position P);//链表的插入例程
void DeleteList(List L);//删除表

#endif /* list_h */
