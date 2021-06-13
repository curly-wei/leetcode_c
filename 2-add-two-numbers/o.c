// ref
// https://stackoverflow.com/questions/66898202/whats-wrong-in-my-link-list-code-for-c-add-two-numbers
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
  struct ListNode* result;  
  volatile bool carry = false;
  while ((l1 != NULL) || (l2 != NULL) ) {
    result = (struct ListNode*)malloc(sizeof(struct ListNode) );
    result->next = NULL;
    int v1 = 0;     
    if (l1 != NULL) {
      v1 = l1->val;
      l1 = l1->next;
    }
    
    int v2 = 0;     
    if (l2 != NULL) {
      v2 = l2->val;
      l2 = l2->next;
    }
        
    int sum = v1 + v2;
    if (carry == true)
      sum += 1;
    carry = (sum > 9);
        
    result->val = sum%10;
    printf("result->val: %d, sum: %d, carry: %d\n",result->val,sum,carry); 
    //result = result->next;

  }
  
  return result;
}
