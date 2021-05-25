#include<iostream>
using namespace std;
class node
{
    public:
        int info;
        node *next=NULL;
        node *prev=NULL;

}*prevnode;
class doublyLinkedList:public node
{
	node *head=NULL,*tail=NULL;
    public:
    	void add(int info)
    	{   
    		if(head==NULL)
    		{   node *save=new node;
    			save->info=info;
    			save->next=head;
    			save->prev=NULL;
    			head=save;
    			tail=head;
    			prevnode=save;

    		}
    		else
            {   node *save=new node;
                save->info=info;
    			save->next=NULL;
    			save->prev=tail;
    			prevnode->next=save;
    			tail=save;
    			prevnode=save;
    		}
    	}
    	void print()
    	{
    		node *save;
    		save=head;
    		while(save!=NULL)
    		{   
    			cout<<save->info<<"-->";
    			save=save->next;
    		}
    		cout<<"\n";
    		save=tail;
    		while(save!=NULL)
    		{
    			cout<<save->info<<"-->";
    			save=save->prev;
    		}
    	}

};
int main()
{

	int item,ch=1,node;
	doublyLinkedList l;
	while(ch==1||ch==2||ch==3)
	{
         if(ch==1)
         {
         	 cout<<"\n Enter element to be inserted in linked list : ";
         	 cin>>item;
         	 l.add(item);

         }
         
         else if(ch==2)
         {
         	l.print();
         	exit(1);
         }

         
         cout<<"\n ENTER UR CHOICE : ";
         cin>>ch;
	}
	return 0;
}
