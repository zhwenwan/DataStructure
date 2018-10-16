//
// Created by aSUSS on 2018/10/16.
//
#ifndef DATASTRUCTURE_BITREE_H
#define DATASTRUCTURE_BITREE_H

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

//先序遍历二叉树
void PreOrder(BiTree BT);

//中序遍历二叉树
void InOrder(BiTree BT);

//后序遍历二叉树
void PostOrder(BiTree BT);

int BitreeDepth(BiTree BT);

#endif
