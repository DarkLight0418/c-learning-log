#include "LinkedList.h"

// 노드 생성
Node* SLL_CreateNode(ElementType NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node)); // Node 크기만큼 메모리 할당

    NewNode->Data = NewData;      // 데이터 저장
    NewNode->NextNode = NULL;     // 다음 노드는 아직 없음

    return NewNode;               // 새로 만든 노드의 주소 반환
}

// 노드 소멸
void SLL_DestroyNode(Node* Node)
{
    free(Node); // 동적 할당 해제
}

// 노드를 리스트 마지막에 추가
void SLL_AppendNode(Node** Head, Node* NewNode)
{
    // 리스트가 비어있으면 새 노드가 Head가 됨
    if ((*Head) == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        // 마지막 노드를 찾아서 새 노드를 연결
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL)
        {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}

// 노드를 특정 노드 뒤에 삽입
void SLL_InsertAfter(Node* Current, Node* NewNode)
{
    NewNode->NextNode = Current->NextNode;
    Current->NextNode = NewNode;
}

// 새 노드를 Head로 삽입
void SLL_InsertNewHead(Node** Head, Node* NewHead)
{
    if ((*Head) == NULL)
    {
        (*Head) = NewHead;
    }
    else
    {
        NewHead->NextNode = (*Head);
        (*Head) = NewHead;
    }
}

// 특정 노드를 제거
void SLL_RemoveNode(Node** Head, Node* Remove)
{
    if ((*Head) == Remove)
    {
        *Head = Remove->NextNode; // Head를 다음 노드로 변경
    }
    else
    {
        // Remove의 앞 노드를 찾아서 Remove 다음 노드를 가리키게 수정
        Node* Current = *Head;
        while (Current != NULL && Current->NextNode != Remove)
        {
            Current = Current->NextNode;
        }
        if (Current != NULL)
        {
            Current->NextNode = Remove->NextNode;
        }
    }
}

// 특정 위치(Location)에 있는 노드 반환 (0부터 시작)
Node* SLL_GetNodeAt(Node* Head, int Location)
{
    Node* Current = Head;

    while (Current != NULL && (--Location) >= 0)
    {
        Current = Current->NextNode;
    }

    return Current; // 위치에 해당하는 노드 또는 NULL
}

// 리스트의 노드 수 세기
int SLL_GetNodeCount(Node* Head)
{
    int Count = 0;
    Node* Current = Head;

    while (Current != NULL)
    {
        Current = Current->NextNode;
        Count++; // <-- 여기에 세미콜론 빠졌음 (오류)
    }

    return Count;
}
