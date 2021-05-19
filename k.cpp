#include<iostream>
using namespace std;
class node
{
	   public:
	   	  int item;
	   	  node *next;
};
class linkedList : public node
{
	   node *head=NULL,*tail=NULL;
	   public:
	   
	   	void add(int data)
	   	{   if(head==NULL)
	   		{
	   			 node *save=new node;
                 save->item=data;
                 save->next=head;
                 head=save;
                 tail=head;
	   		}
	   		else
	   		{
                 node *save=new node;
                 save->item=data;
                 tail->next=save;
                 tail=save;
            }
        }
        void del(int value)
        {
             node *prev=NULL;
             node *block;
             block = head;
             while(block->next != NULL)
             {   if(value != (block->item) )
                 {	prev=block;
             	    block=block->next;
                 }
                 else if(value == (block->item))
                {  node *temp; 
             	   temp=block->next;
             	   delete block;
             	    if(block==head) 
             	     {   head=temp; 
             	        break;   }
               	    else if(block==tail)
             	     {   tail=temp;
             	        break;  }
             	    else
             	      {  prev->next=temp;
             	        break;   }
                 }
                 else 
                  {  cout<<"\n Value doesnot exist";
                     break;
                  }

             }
         }
        void print()
        {   node *save;    
        	save=head;
        	while(save !=NULL)
        	{	cout<<save->item<<"-->";
                save=save->next;
            }
        }
};

int main()
{
	
	int item,ch=1,node,y;
	linkedList l;
	while(ch==1||ch==2||ch==3)
	{
         if(ch==1)
         {
         	 cout<<"\n Enter element to be inserted in linked list : ";
         	 cin>>item;
         	 l.add(item);

         }
         
         else if(ch==2)
         {   cout<<"\n Enter value to be deleted : ";
             cin>>y;
         	 l.del(y);
         }
         else if(ch==3)
         {
         	 l.print();
         	exit(1);
         }

         
         cout<<"\n ENTER UR CHOICE : ";
         cin>>ch;
	}
	return 0;
}
