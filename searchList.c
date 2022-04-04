#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void searchList(List *list1, int value)
{
        if(list1->head == NULL) {
                printf("No memory to search\n");
        }//리스트에 노드가 없을 때 출력
        else{
                if(list1->head->data == value){
                        printf("duck number %d is in the list",value);
                        }//list 처음 노드의 값이 입력한 값과 같을 때 출력
                else{
                        Node *c = list1->head->next; //head가 가리키는 주소
                        Node *d = list1->head; //c의 전 주소
			if(c==NULL)
			{
				printf("duck number %d is not in the list\n",value);
				return 0;
			}//list에 노드가 하나이고 입력한 값과 다를 때 출력 하고 return
			else{
			//data값이 list에 있는지 확인
                        while(c->data != value)
                        {
				d = c;
                                c = c->next; //head부터 tail까지 하나씩 이동
                                if(c==NULL)
                                {
                                printf("duck number %d is not in the list\n",value);
                                return 0;
                                }//입력한 값이 list에 없을 때 출력				
                        }
                        printf("duck number %d is in the list",value);}
			//입력한 값이 list에 있을 때 출력
		}
        } return 0;
}

