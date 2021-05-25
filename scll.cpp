#include<iostream>
using namespace std;
class node
{
    public:
        int info;
        node *next=NULL;
        
}*prevnode;
class sCircularLinkedList:public node
{
	node *head=NULL,*tail=NULL;
    public:
    	void add(int info)
    	{   
    		if(head==NULL)
    		{   node *save=new node;
    			save->info=info;
    			head=save;
                save->next=head;
    			tail=head;
                prevnode=save;
    			
    		}
    		else
            {   node *save=new node;
                save->info=info;
    			save->next=head;
    			prevnode->next=save;
    			tail=save;
    			prevnode=save;
    		}
    	}
    	void print()
    	{
    		node *save;
    		save=head;
    		do
    		{   
    			cout<<save->info<<"-->";
    			save=save->next;
    		}while(save!=head);
    		
    	}

};
int main()
{

	int item,ch=1,node;
	sCircularLinkedList l;
	while(ch==1||ch==2)
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
