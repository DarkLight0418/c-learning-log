#include "DoublyLinkedList.h"  // 사용자 정의 헤더 파일 포함 (노드 구조체 정의 등 포함)

// 노드 생성 함수: 새로운 노드를 동적으로 생성하고 반환
Node* DLL_CreateNode(ElementType NewData) {
    Node* NewNode = (Node*)malloc(sizeof(Node));  // Node 크기만큼 메모리 동적 할당

    // 새 노드의 멤버 변수 초기화
    NewNode->Data = NewData;
    NewNode->PrevNode = NULL;
    NewNode->NextNode = NULL;

    return NewNode;
}

// 노드 제거 함수: 동적으로 할당된 노드 메모리 해제
void DLL_DestroyNode(Node* Node) {
    free(Node);  // 메모리 반납
}

// 노드 추가 함수: 리스트 끝에 새 노드 추가
void DLL_AppendNode(Node** Head, Node* NewNode) {
    // 리스트가 비어있는 경우, 새 노드가 Head가 됨
    if ((*Head) == NULL){
        *Head = NewNode;
    } else {
        // 마지막 노드까지 탐색
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }

        // 새 노드를 마지막 노드 뒤에 연결
        Tail->NextNode = NewNode;
        NewNode->PrevNode = Tail;  // 새 노드의 이전 노드를 기존 테일로 설정
    }
}

// 노드 삽입 함수: 특정 노드(Current) 뒤에 NewNode 삽입
void DLL_InsertAfter(Node* Current, Node* NewNode) {
    NewNode->NextNode = Current->NextNode;
    NewNode->PrevNode = Current;

    if (Current->NextNode != NULL) {
        Current->NextNode->PrevNode = NewNode;
    }
    Current->NextNode = NewNode;
}

// 노드 삭제 함수: 특정 노드를 리스트에서 제거
void DLL_RemoveNode(Node** Head, Node* Remove) {
    if ((*Head) == Remove) {  // 삭제할 노드가 Head인 경우
        *Head = Remove->NextNode;  // Head를 다음 노드로 변경
        if ((*Head) != NULL)
            (*Head)->PrevNode = NULL;

        // 삭제 노드 포인터 초기화
        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    } else {
        Node* Temp = Remove;

        // 이전 노드가 있다면, 그 노드의 Next를 삭제 노드의 Next로 연결
        if (Remove->PrevNode != NULL) 
            Remove->PrevNode->NextNode = Temp->NextNode;
        
        // 다음 노드가 있다면, 그 노드의 Prev를 삭제 노드의 Prev로 연결
        if (Remove->NextNode != NULL)
            Remove->NextNode->PrevNode = Temp->PrevNode;

        // 삭제 노드 포인터 초기화
        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
}

// 특정 위치의 노드 반환 함수
Node* DLL_GetNodeAt(Node* Head, int Location) {
    Node* Current = Head;

    // Location 만큼 이동하며 탐색
    while (Current != NULL && (--Location) >= 0) {
        Current = Current->NextNode;
    }
    return Current;
}

// 노드 개수 반환 함수
int DLL_GetNodeCount(Node* Head) {
    unsigned int Count = 0;
    Node* Current = Head;

    // 끝까지 순회하며 카운트 증가
    while (Current != NULL) {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}

// 노드 정보 출력 함수
void PrintNode(Node* _Node) {
    // 이전 노드 정보 출력
    if (_Node->PrevNode == NULL)
        printf("Prev: NULL ");
    else
        printf("Prev: %d ", _Node->PrevNode->Data);

    // 다음 노드 정보 출력
    if (_Node->NextNode == NULL)
        printf("Next: NULL\n");
    else 
        printf("Next: %d\n", _Node->NextNode->Data);
}
