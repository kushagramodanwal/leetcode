// Last updated: 16/10/2026, 19:48:43

// - Auxiliary space: O(n + m) due to recursion call stack.

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//         // Agar list1 khatam ho gayi, list2 already sorted hai.
//         if (list1 == nullptr)
//             return list2;

//         // Agar list2 khatam ho gayi, list1 already sorted hai.
//         if (list2 == nullptr)
//             return list1;

//         // Chhota node answer ka current node banega.
//         // Baaki nodes ko recursion merge karega.
//         if (list1->val <= list2->val) {
//             list1->next = mergeTwoLists(list1->next, list2);
//             return list1;
//         }
//         else {
//             list2->next = mergeTwoLists(list1, list2->next);
//             return list2;
//         }
//     }
// };


// - Dono lists ke current nodes compare karo.
// - Jo chhota hai usko tail->next se attach karo.
// - Us list ka pointer aage badhao.
// - Ek list khatam hone ke baad doosri list directly attach kar do.
// - Existing nodes ko reuse kar rahe hain, naye nodes create nahi kar rahe.
// - Time: O(n + m)
// - Auxiliary space: O(1) -> recursion stack nahi hai.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Dummy node: answer ka starting point maintain karne ke liye.
        // Dummy khud answer ka part nahi hoga.
        ListNode dummy(0);

        // tail hamesha merged list ke last node ko point karega.
        ListNode* tail = &dummy;

        // Jab tak dono lists mein nodes available hain,
        // tab tak current nodes compare kar sakte hain.
        while (list1 && list2) {

            if (list1->val <= list2->val) {

                // list1 ka current node merged list mein attach karo.
                tail->next = list1;

                // list1 ko next node par move karo.
                list1 = list1->next;
            }
            else {

                // list2 ka current node merged list mein attach karo.
                tail->next = list2;

                // list2 ko next node par move karo.
                list2 = list2->next;
            }

            // tail ko newly added node par move karo.
            tail = tail->next;
        }

        // Ek list khatam ho gayi.
        // Doosri list already sorted hai, isliye directly attach kar sakte hain.
        if (list1)
            tail->next = list1;
        else
            tail->next = list2;

        // Dummy ke next se actual merged list start hoti hai.
        return dummy.next;
    }
};
