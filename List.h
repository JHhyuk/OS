typedef struct node{
        int data;
        struct node *next;
}Node; //노드의 dat값과 다음 노드의 주소 값

typedef struct list{
        struct node *head;
        struct node *tail;
}List; //list의 시작점과 끝점 저장하는 node에 대한 포인터 변수

void insertList(); //데이터 추가
void deleteList(); //데이터 삭제
void searchList(); //데이터 검색
void printList(); //리스트 출력
