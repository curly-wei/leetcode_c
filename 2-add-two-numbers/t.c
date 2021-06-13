// ref
// https://stackoverflow.com/questions/66898202/whats-wrong-in-my-link-list-code-for-c-add-two-numbers
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
  struct ListNode *result = NULL; // Initialize the variable.
  struct ListNode *last = NULL;
  bool carry = false; // There is no need for this to be volatile.
  while ((l1 != NULL) || (l2 != NULL) ) {
    struct ListNode *temp = malloc(sizeof(struct ListNode)); // You shouldn't cast the result of malloc.
    if ( !temp ) {
        // handle the error somehow
    }
    temp->next = NULL;
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
    if (carry)
      sum++;
    carry = (sum > 9);
        
    temp->val = sum%10;
    printf("result->val: %d, sum: %d, carry: %d\n",temp->val,sum,carry); 

    if ( last ) {
      last->next = temp;
    }
    else {
      result = temp;
    }
    last = temp;
  }
  
  return result;
}

