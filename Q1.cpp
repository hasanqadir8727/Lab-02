# include<iostream>
using namespace std;
 class Node{
 	public:
 	int data;
 	Node* next;
	int key;
 	Node(){
 		next=NULL;
 		data= 0;
		key=0;
	 }
	Node(int key, int data){
	 	this->key=key;
		this->data=data;
	 }
	 Node(int data){
	 	this->data=data;
	 }
	 ~Node(){
		delete next;
	 }

 };
 class linkedList{
    public:
	Node* head;
    linkedList(){
        head= NULL;
    }
    linkedList(Node *head){
        this->head=head;
    }
	 Node* nodeExists(int key){
		Node* temp=NULL;
		Node* ptr=head;

		while(ptr!=NULL){
			if(ptr->key==key){
				temp=ptr;
				return temp;
			}
			else{
				ptr=ptr->next;
			}
			return temp;
		}
		return temp;
	 }
    void append(Node* n, int data){
    	Node *ptr= new Node();
		if(head==NULL){
			head=n;
			n->next=NULL;
			cout<<"Node added after head \n";
		for(Node* current = head; current != NULL; current = current->next){
    	cout << current->data << "\n";
	}

		}
		else{
			if(nodeExists(n->key)!=NULL){
				cout<<"The node with" <<n->key<<" already exists";
			}
			else{
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=n;
			n->next=NULL;
			cout<<"Node added in the end of list ";
			cout<<n->data<<"\n";
		}
		}
	}

	void prependNode(int key, int data){
		Node* ptr= new Node(key,data);
		if(nodeExists(ptr->key)!=NULL){
			cout<<"The node with" <<ptr->key<<" already exists";
            delete ptr;
        }
		else{
		if(head==NULL){
			head=ptr;
			ptr->next=NULL;
			cout<<"Node added after head \n";
		}
		else{
			ptr->next=head;
			head=ptr;
			cout<<"Node added after the head in a big linked list \n";
	// 		for(Node* current = head; current != NULL; current = current->next){
    // 		cout << current->data << "\n";
	// }
		}
		}
	}
	void insertAfterNode(int key, int key1, int data){
		Node*  ptr= nodeExists(key1);
		Node *newNode= new Node(key,data);

		if(ptr==NULL){
			cout<<"No node exists with this key";
            delete newNode;
		}
		else{
			if(nodeExists(key)!=NULL){
				cout<<"This key already exists! Enter a new key";
                delete newNode;
            }
			else{
                newNode->next=ptr->next;
                ptr->next=newNode;
			}
		}
	}
    void deleteNode(int key)
{
    Node* temp=head;
    Node* ptr=nodeExists(key);
    while(temp->next->key != key){
        temp=temp->next;

    }
    temp->next=ptr->next;
    delete ptr;
    
} 
	void updateNode(int key, int newData){
		Node *ptr= nodeExists(key);
		if(ptr==NULL){
			cout<<"No nodes exists with this key";
		}
		else{
			ptr->data=newData;
			cout<<"Data updated sucessfully!";
		}
	}
};
 int main(){
	Node* one= new Node(1);
	linkedList l= linkedList();
	Node* two= new Node(2);
	Node* three= new Node(3);
	Node* four= new Node(4);
	Node* five= new Node(5);
	
	l.append(one,1);
	l.append(two,2);
	l.append(three,3);
	
	
	// l.prependNode(one,1);
	// l.prependNode(two,2);
	// l.prependNode(three,3);

 }