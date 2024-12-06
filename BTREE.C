#include<stdio.h>
#include<stdlib.h>
#define MAX 3
#define MIN 2
struct BTreeNode
{
int val[MAX+1],count;
struct BTreeNode*link[MAX+1];
};
struct BTree*root;
struct BTreeNode*createNode(int val,struct BTreeNode*child)
{
struct BTreeNode*newNode;
newNode=(struct BTreeNode*)malloc(sizeof(struct BTreeNode));
newNode->val[1]=val;
newNode->count=1;
newNode->link[0]=root;
newNode->link[1]=child;
return newNode;
}
void insertNode (int val,int pos,struct BTreeNode*node struct BTreeNode*child)
{
intj=nod->count;
while(j>pos)
{
node->val[j+1]=node->val[j];
node->link[j+1]=child;
node->count++;
}
void splitNode (int,val,int*pval,int pos,struct BTreeNode*node,struct BTreeNode*child,struct BTreeNode**newnode)
{
int n,j;
if (pos>MIN)
median=MIN+1;
else
median=MIN;
*newNode=(struct BTreeNode*)malloc(size of(struct BTreeNode));
j=median+1;
while(<=MAX)
{
(*newNode)->[j-median]=node-.val[j];
(*newNode)->link[j-median]=node->link[j];
j++;
}
node->count=median;
(*newNode)->count=MAX-median;
if (pos<=MIN)
{
insertNode(vol,pos,node,child);
}
else
{
insertNode(vol,pos-median,*newNode,child);
}
pvol=node->vol[node->count];
(*newNode)->link[0]=node->link[node->count];
node->count;
}
}
int setvalue(int val,int*pval,struct BTreeNode*node,struct BTreeNode**child)
{
int pos;
if(!node)
{
*pval=val;
*child=NULL;
return;
}
if(val<node->val[i])
{
pos=0;
}
else
{
for(pos=node->count;(val<node->val[pos]&&>1);
pos--);
if(val==node->val[pos])
{
print("Duplicates are not permitted\n");
return0;
}
}
if(set value(val,paval,node->link[pos],child))
if(node->count<MAX)
{
insert Node(*pval,pos,node,*child);
}
else
{
split Node(*pval,pval,pos,node,*child,child);
return;
}
}
return0;
}
void insert(intval)
{
int flag,i;
struct BTreeNode*child;
if(flag)
root=Node(i,child);
}
void search (int,val,int*pos,struct BTreeNode*my Node)
{
if(!myNode)
{
return;
}
if(val<nyNode->val[1])
{
*pos=0;
}
else
{
for(*pos=myNode->count;(val<myNode->val[*pos]&&*pos>1)p;
(*pos)--);
if(val==myNode->val[*pos])
{
print(%dis found at position %"d",val,*pos);
return;
}
}
search(val,pos,myNode->link[*pos]);
return;
}
void traversal (struct BTreeNode*myNode)
{
inti;
if(myNode)
{
for(i=0:i<myNode->count;i++)
{
traversal(my Node->link[i]);
printf("%d",myNode->val[i+1]);
}
traversal[myNode->link[i]);
}
}
void main()
{
int val,ch;
clrscr();
insert(8);
insert(9);
insert(10);
insert(11);
insert(15);
insert(16);
insert(17);
insert(18);
insert(20);
insert(23);
traversal (root);
printf("\n");
search (11,&ch,root);
getch;
}

