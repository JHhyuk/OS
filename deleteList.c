#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void deleteList(List *list1, int value)
{
        if(list1->head == NULL) {
                printf("No memory to delete\n");
        }//노드가 없는 경우 출력
        else{
                if(list1->head->data == value){
			list1->head = list1->head->next;
                        }//리스트 첫번 째 노드의 값을 삭제할 때
                else{
                        Node *a = list1->head->next;//head가 가리키는 주소
                        Node *b = list1->head;//a의 전 주소
			if(a==NULL)
			{
				printf("You write a wrong number\n");
				return 0;
			}//리스트에 노드가 하나이며 찾는 번호가 없을 때 출력 
			else{
			//입력한 값이 list에 있는지 확인	
                        while(a->data != value)
                        {
				b = a;
                                a = a->next;
				//a의 data값이 입력한 값과 다를 때 head에서 tail로 하나씩 이동
                                if(a==NULL)
                                {
                                printf("You write a wrong number\n");
                                return 0;
                                }//찾는 번호가 없을 때 출력 
                        }
                        b->next = a->next;
		       	//b 가리키는 노드의 다음 주소 -> a 가리키는 노드의 다음 주소
			if(b->next == NULL)
			{list1->tail = b;}
			//리스트 마지막 노드를 삭제할 경우에 tail의 위치 수정
                        free(a);/*a가 가리키는 노드 free*/}}
        }
}

