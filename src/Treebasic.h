using namespace std;

struct node
{
	char data;
	struct node* left;
	struct node* right;
};

struct node* newnode(char data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}

int printtree(struct node* tree)
{
	if(tree == NULL)
	{
		return 0;
	}
	
	else
	{
		cout<<tree->data<<"->";
		
		printtree(tree->left);
		printtree(tree->right);		
	}
	
	return 0;
}