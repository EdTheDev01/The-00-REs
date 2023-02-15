#include <stdio.h> 
#include <stdlib.h>
typedef struct node{

char letter; 
struct node* next;
}node;

int length(node* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

char* tocString(node* head){
    int len = length(head);
    char* str = malloc(len + 1);
    int i = 0;
    while(head){
        str[i++] = head->letter;
        head = head->next;
    }
    str[i] = '\0';
    return str;
}

void insertChar(node** pHead, char c){
    node* newNode = malloc(sizeof(node));
    newNode->letter = c;
    newNode->next = *pHead;
    *pHead = newNode;
}

void deleteList(node** pHead){
    node* current = *pHead;
    while(current){
        node* next = current->next;
        free(current);
        current = next;
    }
    *pHead = NULL;
}

int main(void){
  int i, strLen, numInputs;
  node* head= NULL;
  char* str; 
  char c; 
  FILE* inFile fopen("input.txt","r");

  fscanf(inFile, " %d\n", &numInputs);

  while (numInputs-- > 0)
  {  
    fscanf(inFile," %d\n", &strLen); 
    for (i=0; i< strlen; i++)
    {
      fscanf(inFile," %c", &c); 
      insertChar(&head, c);
    }
  str = tocString(head); 
  printf("string is: %s\n", str);

  free(strr); 
  deleteList(&head);

  if (head != NULL){
    printf("deleteList is not correct!");
    break;
  }
}
fclose(inFile);
}