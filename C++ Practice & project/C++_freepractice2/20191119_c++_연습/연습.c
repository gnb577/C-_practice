#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SZ 100
#define ascii 256
typedef struct node
{
	char c;
	int f;
	struct node* next;
	struct node* left;
	struct node* right;
}node;

struct node* head = 0;
char codebuf[100] = { 0, };
char buf[BUF_SZ];
int buf_cnt[ascii];
int buf_idx = -1;

void cnt()
{
	for (int i = 0; i < strlen(buf); i++)
	{
		buf_cnt[buf[i]]++;
	}
}
node* createnode(char _c, int _f)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->c = _c;
	new_node->f = _f;
	new_node->next = 0;
	new_node->left = 0;
	new_node->right = 0;
	return new_node;
}
void addsll(node* _node)
{
	node* new_node = _node;
	if (head == 0)
	{
		head = new_node;
		return;
	}
	else
	{
		node* temp = head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

}

node* findleast()
{
	node* temp = head;
	node* least_temp = head;
	int least_count = temp->f;
	while (temp != 0)
	{
		if (temp->f < least_count)
		{
			least_temp = temp;
			least_count = temp->f;
		}
		temp = temp->next;
	}
	if (head == least_temp)
	{
		head = head->next;
	}
	else
	{
		temp = head;
		while (temp->next != least_temp)
		{
			temp = temp->next;
		}
		temp->next = least_temp->next;
	}
	return least_temp;
}

void travelhuff(node* _node, char _code)
{
	buf_idx++;
	codebuf[buf_idx] = _code;
	codebuf[buf_idx + 1] = 0;
	if (_node->left == 0 && _node->right == 0)
	{
		printf("%c ----> %s \n", _node->c, codebuf);
	}
	else
	{
		travelhuff(_node->left, '0');
		travelhuff(_node->right, '1');
	}
	codebuf[buf_idx] = 0;
	buf_idx--;
	

}

int main()
{
	FILE* F;

	memset(buf,0, sizeof(char) * BUF_SZ);
	memset(buf_cnt, 0, sizeof(int) * ascii);
	
	F = fopen("Alice.txt","rt");

	if (F == NULL)
	{
		printf("¸ÁÇÔ");
		return 0;
	}
	while (fgets(buf, sizeof(char) * (BUF_SZ - 1), F) != 0)
	{
		cnt();
	}

	fclose(F);

	for (int i = 0; i < 256; i++)
	{
		if (buf_cnt[i] > 0)
		{
			addsll(createnode((char)i,buf_cnt[i]));
		}
	}
	while (1)
	{
		if (head->next == NULL)
		{
			break;
		}
		node* a = findleast();
		node* b = findleast();
		node*c = createnode(' ', a->f + b->f);
		c->left = a;
		c->right = b;
		addsll(c);
	}
	travelhuff(head->left, '0');
	travelhuff(head->right, '1');

	return 0;
}