//--------------删除链表重复内容-------------
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		if (head == NULL)
			return NULL;

		ListNode* p1 = head;
		ListNode* headTemp = new ListNode(p1->val);

		for (; p1 != NULL; p1 = p1->next)
		{
			for (ListNode* p2 = headTemp; p2 != NULL;)
			{
				if (p1->val != p2->val)
				{
					if (p2->next != NULL)
					{
						p2 = p2->next;
					}
					else
					{
						p2->next = new ListNode(p1->val);
						break;
					}
				}
				else
					break;
			}
		}
		return headTemp;
	}
};

void main()
{
	ListNode *n1 = new ListNode(1);
	ListNode *n2 = new ListNode(3);
	n1->next = n2;
	ListNode *n3 = new ListNode(6);
	n2->next = n3;
	ListNode *n4 = new ListNode(3);
	n3->next = n4;
	ListNode *n5 = new ListNode(1);
	n4->next = n5;

	Solution s;
	ListNode* temp = s.deleteDuplicates(n1);

	do
	{
		cout << temp->val << endl;
		temp = temp->next;
	} while (temp != NULL);
}
