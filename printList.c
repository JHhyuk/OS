#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void printList(List *list1)
{
        Node *n = list1->head; //첫 시작 노드의 주소값 할당
        if(n == NULL)
                printf("List is empty\n"); //list가 비었을 때
        else {
                printf("Duck list ");

                while (n != NULL) {
                        printf("--> %d", n->data); 
                        n=n->next;
                } //list 끝 노드의 next가 NULL이 될 때 까지 반복 및 리스트 출력
        }
}

