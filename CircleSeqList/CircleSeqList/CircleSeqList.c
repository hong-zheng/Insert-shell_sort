#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
// ѭ������
typedef int DataType;
typedef struct NODE{
	DataType data;
	struct NODE* next;
}Node;
typedef struct CIRCLESEQLIST{
	Node* head; // ����һ��ͷ��㣬����������
	size_t size; //���������е����ݸ���
}CircleSeqList;
void Init(CircleSeqList* cls){
	if (NULL == cls){
		return;
	}
	cls->head = (Node*)malloc(sizeof(Node));
	cls->head->data = NULL;
	cls->head->next = cls->head;
	cls->size = 0;
}
// �Ӻ������Ԫ��
void CircleSeqListBackInsert(CircleSeqList* cls, Node* node){
	if (NULL == cls){
		return;
	}
	Node* pCurrent = cls->head;
	for (int i = 0; i < cls->size;i++){
		pCurrent = pCurrent->next;
	}
	node->next = pCurrent->next;
	pCurrent->next = node;
	cls->size++;
}
void Print(Node* node){
	printf("%d ", node->data);
}
void Display(CircleSeqList* cls){
	if (NULL == cls){
		return;
	}
	Node* pCurrent = cls->head;
	for (int i = 0; i < cls->size;i++){
		pCurrent = pCurrent->next;
		Print(pCurrent);
	}
	printf("\n");
}
// ��posλ�ò���һ��Ԫ��,ͷԪ��(λ��Ϊ0)�ų������ɽ�����Ԫ�ط���0
void CircleSeqListPosInsert(CircleSeqList* cls, size_t pos ,Node* node){
	if (NULL == cls){
		return;
	}
	if ( 0 == pos){
		return;
	}
	Node* pCurrent = cls->head;
	for (size_t i = 0; i < pos;i++){
		pCurrent = pCurrent->next;
	}
	node->next = pCurrent->next;
	pCurrent->next = node;
	cls->size++;
}
void test1(){
	Node node1,node2,node3,node4;
	node1.data = 1;
	node2.data = 2;
	node3.data = 3;
	node4.data = 4;
	Node node5, node6, node7, node8;
	node5.data = 23;
	node6.data = 20;
	node7.data = 14;
	node8.data = 22;

	CircleSeqList cls;
	Init(&cls);
	CircleSeqListBackInsert(&cls, &node1);
	CircleSeqListBackInsert(&cls, &node2);
	CircleSeqListBackInsert(&cls, &node3);
	CircleSeqListBackInsert(&cls, &node4);
	Display(&cls);
	CircleSeqListPosInsert(&cls, 2, &node5);
	CircleSeqListPosInsert(&cls, 3, &node6);
	CircleSeqListPosInsert(&cls, 1, &node7);
	Display(&cls);
}
int maain(){
	test1();

	system("pause");
	return 0;
}