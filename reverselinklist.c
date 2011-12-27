#include <stdio.h>
struct node {
  int value;
  struct node* next;
};

void reverse(struct node* head);
void reverse2(struct node* head);
void print_list(struct node const* head);

int main(void)
{
  struct node a = { 0, NULL }, b = { 1, &a }, c = { 2, &b }; 
  /* c(2) -> b(1) -> a(0) -> NULL */
  print_list(&c);
  reverse2(&c);
  /* changed to a(0) -> b(1) -> c(2) -> NULL */
  print_list(&a);

  return 0;
}

void print_list(struct node const* head)
{
  printf("[");
  for (; NULL != head; head = head->next) {
    printf(" %d", head->value);
  }
  printf(" ]\n");
}

struct node** _reverse(struct node* n)
{
  if (NULL != n->next)
    *_reverse(n->next) = n;
  return &(n->next);
}

void reverse(struct node* head)
{
  *_reverse(head) = NULL;
}

void reverse2(struct node* head)
{
  struct node* cur = head;
  struct node* next = head->next;
  struct node* next2 = NULL;
  if(!cur || !next) return;

  cur->next = NULL;
  
  while(next)
    {
      next2 = next->next;
      next->next = cur;
      cur = next;
      next = next2;
    }

  head = cur;
}
