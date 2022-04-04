#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int  main(void)
{
        List* list1 = (List*)malloc(sizeof(List));//list 할당
        list1->head = NULL;
        list1->tail = NULL;
	//head, tail 초기화
	int choice; //수행하고 싶은 기능의 번호
	int duck; //오리 번호
        printf("\nStart Duck fishing\n");
      
	while (choice != 5){
		printf("\n\n1 : add duck number\n"
	       	       "2 : delete duck number\n"
		       "3 : search duck number\n"
		       "4 : show duck list\n"
		       "5 : end\n"
		       "Your choice : ");
		scanf("%d",&choice); //수행하고 싶은 기능의 번호 입력
		switch (choice) {
			case 1:
				printf("Enter duck number : ");
				scanf("%d", &duck); //오리 번호 입
				insertList(list1, duck);
				printList(list1);
				break;
				//데이터 추가 및 리스트 출력
			case 2:
				printf("Enter duck number : ");
				scanf("%d", &duck);
				deleteList(list1, duck);
				printList(list1);
				break;
				//데이터 삭제 및 리스트 출력
			case 3:
				printf("Enter duck number : ");
				scanf("%d", &duck);
				searchList(list1, duck);
				break;
				//데이터 검색
			case 4:
				printList(list1);
				break;
				//리스트 출력
			case 5:
				break;
				//종료
			default:
				printf("Wrong number.\n");
			        break;
				//잘못된 번호 입력 시 출력
		}
	}
	printf("end.\n"); //종
	return 0;
}

