typedef struct LinkedList LinkedList;
typedef struct Node Node;

struct LinkedList{
	void* head;
	void* tail;
	int count;
};

struct Node{
	int data;
	void* next;
};

LinkedList createList();
Node create_node(void* data);
int add_to_list(LinkedList *,Node *);
void *get_first_element(LinkedList list);
void *get_last_element(LinkedList list);
void traverse(LinkedList, void (*)(void *data));
