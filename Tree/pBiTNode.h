#ifndef _PBITNODE_H_
#define _PBITNODE_H_

#ifndef _INC_STDLIB
#include <stdlib.h>
#endif

#ifndef TElemType
#define TElemType int
#endif

typedef struct BiTNode{
	TElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode;

BiTNode* InitBiTree(int n)
{
	int i, t;
	BiTNode* p;
	if(n<1||!(p=malloc(sizeof(BiTNode))))
		return NULL;
	n++, t=n, i=1;
	while(t)
		t>>=1, i<<=1;
	i>>=2, t=n&i;
	p->lchild=InitBiTree(i+(t ? t : n&(i-1))-1);
	p->rchild=InitBiTree(i+(t ? n&(i-1) : 0)-1);
	return p;
}

void DestroyBiTree(BiTNode* T)
{
	if(!T)
		return;
	DestroyBiTree(T->lchild);
	DestroyBiTree(T->rchild);
	free(T);
}

int PreOrderTraverse(BiTNode* T, int (*visit)(BiTNode*))
{
	int ret;
	int do_PreOrderTraverse(BiTNode* T)
	{
		if(!T)
			return 0;
		if(ret=visit(T))
			return ret;
		if(ret=do_PreOrderTraverse(T->lchild))
			return ret;
		if(ret=do_PreOrderTraverse(T->rchild))
			return ret;
		return 0;
	}
	return do_PreOrderTraverse(T);
}

int InOrderTraverse(BiTNode* T, int (*visit)(BiTNode*))
{
	int ret;
	int do_InOrderTraverse(BiTNode* T)
	{
		if(!T)
			return 0;
		if(ret=do_InOrderTraverse(T->lchild))
			return ret;
		if(ret=visit(T))
			return ret;
		if(ret=do_InOrderTraverse(T->rchild))
			return ret;
		return 0;
	}
	return do_InOrderTraverse(T);
}

int PostOrderTraverse(BiTNode* T, int (*visit)(BiTNode*))
{
	int ret;
	int do_PostOrderTraverse(BiTNode* T)
	{
		if(!T)
			return 0;
		if(ret=do_PostOrderTraverse(T->lchild))
			return ret;
		if(ret=do_PostOrderTraverse(T->rchild))
			return ret;
		if(ret=visit(T))
			return ret;
		return 0;
	}
	return do_PostOrderTraverse(T);
}

int LevelOrderTraverse(BiTNode* T, int (*visit)(BiTNode*))
{
	int i, j, b;
	BiTNode *T1;
	for(i=1;1;i++){
		for(b=i,j=1;b;b>>=1,j<<=1);
		b=i, T1=T, j>>=1;
		while(j>>=1)
			T1 = b&j ? T1->rchild : T1->lchild;
		if(!T1)
			break;
		if(b=visit(T1))
			return b;
	}
	return 0;
}





















/*

 3 2 1 0x0011
 4 2 2 0x0100
 5 3 2 0x0101
 6 4 2 0x0110
 7 4 3 0x0111
 8 4 4 0x1000
 9 5 4 0x1001
10 6 4 0x1010
11 7 4 0x1011
12 8 4 0x1100
13 8 5 0x1101
14 8 6 0x1110
15 8 7 0x1111
16 8 8 0x10000

*/

#endif