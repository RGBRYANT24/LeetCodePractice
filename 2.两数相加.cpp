/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
        ListNode* ans = new ListNode;
        ListNode* p1=l1;
        ListNode* p2=l2;
        while(p2!=nullptr)
        {
            p2=p2->next;
        }
        ans=p2;
        //ans->val=p2->val;
        while(p1!=nullptr)
        {
            p1=p1->next;
        }
        return ans;
    }
};
// @lc code=end

