//
// Created by bolvvv on 2021/3/18.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//个人思路，应该是错误的，未验证
class Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result_head;
        ListNode* result_p = result_head;
        int in_num = 0;//进位
        int tmp = 0;//计算结果
        while(l1 != nullptr && l2 != nullptr){
            tmp= l1->val + l2->val + in_num;
            if(tmp >= 10){
                in_num = 1;
                tmp = tmp-10;
            } else{
                in_num = 0;
            }
            //当前节点赋值
            result_p->val=tmp;
            //建立新节点
            ListNode* tmp;
            //移动指针
            result_p->next = tmp;
            result_p = tmp;
            //移动两个链表的指针
            l1 = l1->next;
            l2 = l2->next;
        }
        if(in_num == 0){
            if(l1 == nullptr && l2 == nullptr) return result_head;
            else{
                ListNode *tmp_p = l1 == nullptr ? l2:l1;
                result_p->next = tmp_p;
            }
        } else{
            if(l1 == nullptr && l2 == nullptr){
                auto* tmp1 = new ListNode(1);
                result_p->next = tmp1;
                return result_head;
            } else{
                ListNode *tmp_p = l1 == nullptr ? l2:l1;
                int tmp_sum;
                while(tmp_p != nullptr){
                    tmp_sum = tmp_p->val + in_num;
                    if (tmp_sum <10){
                        result_p->val = tmp_sum;
                        result_p->next = tmp_p;
                        return result_head;
                    } else{
                        in_num = 1;
                        result_p->val = tmp_sum-10;
                        //建立新节点
                        auto* tmp2 = new ListNode();
                        //移动指针
                        result_p->next = tmp2;
                        result_p = tmp2;
                        tmp_p=tmp_p->next;
                    }
                }
            }
        }
    }
};
//官方解答
class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val: 0;
            int n2 = l2 ? l2->val: 0;
            int sum = n1 + n2 + carry;
            if (!head) {
                head = tail = new ListNode(sum % 10);
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            carry = sum / 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return head;
    }
};