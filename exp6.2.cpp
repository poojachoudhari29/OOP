#include<iostream>
#include<stdlib.h>
using namespace std;
class QUEUE
{
	private:
	int*queue_array=NULL;
	int start,end,size;
	public:
	QUEUE()
	{
		start=-1;
		end=-1;
		size=0;
	}
	int isFull()
	{
		if((end-start+size)%size==size-1)
		return 1;
		return 0;
	}
	int isEmpty()
	{
		if(start==-1 && end==-1)
		return 1;
		return 0;
	}	
	void  alloc(int x)
	{
		size=x;
		queue_array=(int *)calloc(sizeof(int),size);
        
	}
	int enqueue(int data)
	{
		if(!isFull())
		{
		if(isEmpty())
		{
			start++,end++;
		}
		else
		{
			end=(end+1)%size;
		}	
		queue_array[end]=data;
		return 1;
		}
		return 0;
	}
	void Display()
	{
		if(isEmpty()==0)
		{
		for(int i=start;i!=end;i=(i+1)%size)
		{
			cout<<queue_array[i]<<"\t";
		}
		cout<<queue_array[end]<<"\t";
		}
	}	
		
	void dequeue()
	{
		if(isEmpty()==0)
		{
		if((end-start+size)%size==1)
		{
			start=-1,end=-1;
		}
		else	
		start=(start+1)%size;	
		
		}
	}		 	
};	
int main()
{
   QUEUE q1;
   int choice,data;
   while (1)
    {
        cout << "\nChoose from following\n"
             << "1-enqueue  2-dequeue  3-Display" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Give the data" << endl;
            cin >> data;
            q1.enqueue(data);
            q1.Display();
        }
        else if (choice == 2)
        {
            q1.dequeue();
            q1.Display();
        }
        else if (choice =3)

        {
            q1.Display();
            break;
        }
    }
 
}
