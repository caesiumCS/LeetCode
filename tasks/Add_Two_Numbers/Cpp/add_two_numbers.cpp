/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int additionalValue = 0;
        ListNode* returnNode;
        ListNode* node = new ListNode();

        returnNode = node;

        bool status = l1 != nullptr || l2 != nullptr || additionalValue;

        while (status) {
            int sumValue = 0;

            if (l1 != nullptr) {
                sumValue += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sumValue += l2->val;
                l2 = l2->next;
            }

            sumValue += additionalValue;

            if (sumValue >= 10) {
                sumValue = sumValue % 10;
                additionalValue = 1;
            } else {
                additionalValue = 0;
            }

            node->val = sumValue;
            status = l1 != nullptr || l2 != nullptr || additionalValue;
            if (status) {
                node->next = new ListNode();
                node = node->next;
            }

        }


        return returnNode;
    }
};