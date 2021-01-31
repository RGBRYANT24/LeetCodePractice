// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

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
        ListNode* ans=new ListNode;
        ListNode* pans=ans;
        ListNode* p1=l1;
        ListNode* p2=l2;
        int jinwei=0;
        while(pans!=nullptr)
        {
            int tmp1=(p1==nullptr)?0:p1->val;
            int tmp2=(p2==nullptr)?0:p2->val;
            int sum=tmp1+tmp2+jinwei;
            jinwei=0;
            if(sum>=10)
            {
                jinwei=1;
                sum=sum%10;
            }
            pans->val = sum;
            if(p1!=nullptr)
            {
                p1 = p1->next;
            }
            if(p2!=nullptr)
            {
                p2 = p2->next;
            }           
            if(p1!=nullptr||p2!=nullptr||jinwei==1)//如果还要产生下一个节点
            {
                //如果要产生下一个节点，那么当前节点就是计算和%10
                pans->next = new ListNode;
                pans = pans->next;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

