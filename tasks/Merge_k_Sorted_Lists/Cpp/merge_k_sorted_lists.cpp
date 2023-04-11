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

    int getMinValueListNodeInd(vector<ListNode*>& lists) {
        int ind = -1;
        int val = -1;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] == nullptr) {
                continue;
            }
            if (ind == -1) {
                ind = i;
                val = lists[i]->val;
            } else {
                if (lists[i]->val < val) {
                    ind = i;
                    val = lists[i]->val;
                }
            }
        }
        return ind;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* start = nullptr;
        ListNode* current = nullptr;

        int ind = getMinValueListNodeInd(lists);

        while (ind != -1) {
            
            if (current == nullptr) {
                current = new ListNode(lists[ind]->val);
                start = current;
            } else {
                current->next = new ListNode(lists[ind]->val);
                current = current->next;
            }
            lists[ind] = lists[ind]->next;
            ind = getMinValueListNodeInd(lists);
        }

        return start;
    }
};