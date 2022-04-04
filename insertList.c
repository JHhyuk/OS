#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void insertList(List *list1, int value)
{
        Node* new = (Node*)malloc(sizeof(Node)); //추가할 노드 생성(메모리 할당 요청)

        if(new == NULL)
        {
                printf("No memory available.\n");
        } //동적 할당 오류 시
        new->data = value; //새로 추가되는 노드의 값
        new->next = NULL; //새로 추가되는 노드의 다음 주소
        if(list1->head == NULL){
                list1->head=new;
                list1->tail=new;
                }//노드가 없는 경우
        else
        {
                list1->tail->next=new; //tail이 가리키는 노드의 다음 주소->새로 추가된 노드
                list1->tail=new; //tail이 가리키는 주소 ->새로 추가된 노드
        }

}

