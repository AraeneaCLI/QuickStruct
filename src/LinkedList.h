using namespace std;

struct node
{
	int data;
	node* next;
};

struct node* head = NULL;

void insertnode(int data)
{
	struct node* newnode = new node;
	newnode->data=data;
	newnode->next=head;
	head = newnode;
}

void display()
{
	cout<<"The data Contained in the Linked List are:- "<<endl;
	struct node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

void displayreverse()
{
	struct node* current = head;
	node *prev = NULL;
	node *next = NULL;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		
	}
	
	
	head=prev;
}

int countnodes()
{
	struct node* tmp = head;
	
	int count = 0;
	
	while(tmp!=NULL)
	{
		count++;
		tmp=tmp->next;
	}
	
	return count;
}
