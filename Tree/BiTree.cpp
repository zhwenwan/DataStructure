//
// Created by aSUSS on 2018/10/16.
//
#include "BiTree.h"
#include "iostream"

using namespace std;

void PreOrder(BiTree BT) {
    if (BT) {
        cout << BT->data << " " << endl;
        PreOrder(BT->lchild);
        PreOrder(BT->rchild);
    }
}

void InOrder(BiTree BT) {
    if (BT) {
        PreOrder(BT->lchild);
        cout << BT->data << " " << endl;
        PreOrder(BT->rchild);
    }
}

void PostOrder(BiTree BT) {
    if (BT) {
        PreOrder(BT->lchild);
        PreOrder(BT->rchild);
        cout << BT->data << " " << endl;
    }
}