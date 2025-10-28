#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  

struct NODE  
{  
	struct NODE* next;  
	struct NODE* prev;  
	char string;  
};   

char initstr[100001];  

int main()  
{  
	struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));
	struct NODE* tail = (struct NODE*)malloc(sizeof(struct NODE));

	if (head == NULL || tail == NULL)  
	{  
		return 1;  
	}  
	head->next = tail;  
	head->prev = NULL;  
	tail->prev = head;  
	tail->next = NULL;  

	scanf("%s", initstr);  
	int len = strlen(initstr);  

	for (int i = 0; i < len; i++)  
	{  
		//메모리 할당  
		struct NODE* node = (struct NODE*)malloc(sizeof(struct NODE));
		if (node == NULL)  
		{  
			return 1;  
		}  
		node->string = initstr[i];  

		struct NODE* old_last = tail->prev;  
		node->next = tail;  
		node->prev = old_last;  

		old_last->next = node;  
		tail->prev = node;  
	}  

	int num;  
	scanf(" %d", &num);  

	struct NODE* cursor = tail;  

	while (num--)  
	{  
		char op;  
		scanf(" %c", &op);  

		if (op == 'L')  
		{  
			if(cursor->prev != head) cursor = cursor->prev;  
		}  
		else if (op == 'D')  
		{  
			if (cursor != tail) cursor = cursor->next;  
		}  
		else if (op == 'B')  
		{  
			struct NODE* node_delete = cursor->prev;  
			struct NODE* prevnode = node_delete->prev;  

			if (prevnode != NULL) 
			{  
				prevnode->next = cursor;  
				cursor->prev = prevnode;  
			}  
		}  
		else if ( op == 'P')
		{  
			char str;  
			scanf(" %c", &str);  

			struct NODE* node = (struct NODE*)malloc(sizeof(struct NODE));
			if (node == NULL)  
			{  
				return 1;  
			}  
			node->string = str;  
			struct NODE* prevnode = cursor->prev;  

			if (prevnode != NULL)  
			{  
				prevnode->next = node;  
				node->prev = prevnode;  
			}  

			node->next = cursor;  
			cursor->prev = node;  
		}  
	}  

	//리스트 출력  
	struct NODE* curr = head->next;  
	while (curr != tail)  
	{  
		printf("%c", curr->string);  
		curr = curr->next;  
	}  

	//노드 전체 메모리 해제  
	curr = head;  
	while (curr != NULL)  
	{  
		struct NODE* next = curr->next;  
		free(curr);  
		curr = next;  
	}  

	return 0;  
}