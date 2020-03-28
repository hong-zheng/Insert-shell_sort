#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

// STL ����
// standard Template Library ��׼ģ��⣨�Ѿ�д�ã�Ҳ��Ҫʵ�֣�
// 1�����������ݽṹ ���������� ��ȫ->��������
//    ���� ���� �ṹ�� ˳��� ���� ջ ���� ������
//    �����У� �ñ�׼������
// 2���㷨


// ����
// ϵ��ʽ����������ʽ���� ��������
// vertor ����
// list ˫������
// deque ˫��̬����
// ��ϵʽ����: ����ʽ���� ��������
//  map set
//  multimap multiset

// ������Ȼ�е����ֹ���:
// ��ɾ�Ĳ�

// �������еĺ�����
// ���죬����
// ���롢ɾ�������ҡ��������졢Ԫ�ظ���������

// ������(���е����ݽṹ)
// ���ڶ�λ�����е�ĳ��Ԫ��
// ����(�±�)������(ָ��next)
// ����ָ��(����)

int misssan(void){

	system("pause");
	return 0;
}




// ���������
typedef struct BINARYNODE{
	char ch;
	struct BINARYNODE* lchild;
	struct BINARYNODE* rchild;
}BinaryNode;

// ����ݹ����
void FrontRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	// �������
	// 1���ȷ��ʸ����
	printf("%c",root->ch);
	// 2������������
	FrontRecursion(root->lchild);
	// 3������������
	FrontRecursion(root->rchild);
}
// ���������������
void CentalRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	CentalRecursion(root->lchild);
	printf("%c",root->ch);
	CentalRecursion(root->rchild);
}
// �������ĺ������
void BacklRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	BacklRecursion(root->lchild);
	BacklRecursion(root->rchild);
	printf("%c", root->ch);
}

// ��Ҷ�ӽ����Ŀ(���õݹ�)
int num = 0;
void CaculateLeafNum(BinaryNode* root){
	if (NULL == root){
		return;
	}
	if (root->lchild == NULL && root->rchild==NULL){
		num++;
	}
	// ������Ҷ�ӽ����
	CaculateLeafNum(root->lchild);
	// ������Ҷ�ӽ����
	CaculateLeafNum(root->rchild);
}

// ������������
int CaculateTreeDepthNum(BinaryNode* root){
	if (root == NULL){
		return 0;
	}
	int l = CaculateTreeDepthNum(root->lchild);
	int r = CaculateTreeDepthNum(root->rchild);
	return (l > r) ? (l + 1) : (r + 1);
}
// ����������
BinaryNode* CopyBinaryTree(BinaryNode* root){
	if (NULL == root){
		return NULL;
	}
	// �ݹ鿽��

	// ����������
	BinaryNode* lchild = CopyBinaryTree(root->lchild);
	// ����������
	BinaryNode* rchild = CopyBinaryTree(root->rchild);
	// �������
	BinaryNode* newnode = (BinaryNode*)malloc(sizeof(BinaryNode));
	newnode->ch = root->ch;
	newnode->lchild = lchild;
	newnode->rchild = rchild;
	return newnode;
}

// �ͷŶ�����
void FreeSpaceBinaryTree(BinaryNode* root){
	if (NULL == root){
		return;
	}
	// �ͷ�������
	FreeSpaceBinaryTree(root->lchild);
	// �ͷ�������
	FreeSpaceBinaryTree(root->rchild);
	free(root);
}
void CreateBinaryTree(){
	//�������
	BinaryNode nodeA = { 'A', NULL, NULL };
	BinaryNode nodeB = { 'B', NULL, NULL };
	BinaryNode nodeC = { 'C', NULL, NULL };
	BinaryNode nodeD = { 'D', NULL, NULL };
	BinaryNode nodeE = { 'E', NULL, NULL };
	BinaryNode nodeF = { 'F', NULL, NULL };
	BinaryNode nodeG = { 'G', NULL, NULL };
	BinaryNode nodeH = { 'H', NULL, NULL };
	// ��������ϵ
	nodeA.lchild = &nodeB;
	nodeA.rchild = &nodeF;
	nodeB.rchild = &nodeC;
	nodeC.lchild = &nodeD;
	nodeC.rchild = &nodeE;
	nodeF.rchild = &nodeG;
	nodeG.lchild = &nodeH;
	BacklRecursion(&nodeA);
	// �������
	//FrontRecursion(&nodeA);
	//CentalRecursion(&nodeA);
	//BacklRecursion(&nodeA);
	//CaculateLeafNum(&nodeA);
	//printf("Ҷ�ӽ����:%d\n",num);
	//printf("�������:%d\n", CaculateTreeDepthNum(&nodeA));
	BinaryNode* tree = CopyBinaryTree(&nodeA);
	printf("\n");
	BacklRecursion(tree);

	// �ͷſ�������
	//FreeSpaceBinaryTree(tree);
}


int mainw(void){
	CreateBinaryTree();
	printf("\n");
	system("pause");
	return 0;
}