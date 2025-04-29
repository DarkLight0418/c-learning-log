#ifndef LINKEDLIST_H  // 만약 LINKEDLIST_H가 정의되어 있지 않다면
#define LINKEDLIST_H  // 그럼 이제부터 LINKEDLIST_H는 정의된 것으로 간주해주길 바라

/* 헤더 가드 시작 */

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;  // typedef - 기존 자료형에 새로운 이름을 붙이는 문법

typedef struct tagNode {  // 노드 하나 정의
	ElementType Data;  // 노드가 저장하는 데이터
	struct tagNode* NextNode;  // 다음 노드를 가리키는 포인터
} Node;  // struct tagNode 대신 그냥 Node로 쓸 수 있게끔

Node* SLL_CreateNode(ElementType NewData);  // 매개변수로 NewData를 받아서 Data에 넣고, NextNode는 NULL로 초기화합니다.
void SLL_DestroyNode(Node* Node);  // 노드를 메모리에서 해제하는 함수
void SLL_AppendNode(Node** Head, Node* NewNode);  //  마지막에 노드 추가
void SLL_InsertAfter(Node* Current, Node* NewNode);  // 특정 노드 뒤에 새 노드 삽입
void SLL_InsertNewHead(Node** Head, Node* NewNode);  // 새 노드를 맨 앞(헤드)에 삽입
void SLL_RemoveNode(Node** Head, Node* Remove);  // 주어진 노드를 연결 리스트에서 제거
Node* SLL_GetNodeAt(Node* Head, int Location);   // 리스트의 특정 위치의 노드를 반환(순차적으로 NextNode를 따라 가면서 찾음
int SLL_GetNodeCount(Node* Head);  // 리스트에 있는 노드 개수 반환

// 헤더 가드 끝부분
#endif