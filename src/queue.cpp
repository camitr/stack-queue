#include <iostream>

using namespace std;
class QueueOp{
public:
	int list[5],dataI,dataD;
	static int rear,front;
	void getData()
	{
		cout<<"enter the element";
		cin>>dataI;

	}

	void getDeldata()
	{
		cout<<"Enter data to delete";
		cin>>dataD;
		cout<<dataI<<" this value will be deleted from queue";
	}
	void showlist()
	{
	//	cout<<"queue contain";
		//for(int i=0;i<5;i++)
		//{
			cout<<(list);
		//}
	}
	void insertQueue(QueueOp);
	int deleteQueue(QueueOp);
	bool emptyQueue();
};

int QueueOp::rear = 4;
int QueueOp::front = 4;

void QueueOp::insertQueue(QueueOp val)
{
	//cout<<"value"<<val.dataI;

	if(QueueOp::rear==4)
	{

		QueueOp::rear=0;
	}
	else
	{

		QueueOp::rear = QueueOp::rear + 1;
		cout<<"value of rear = "<<val.rear<<endl;
	}
	if(QueueOp::rear == val.front)
	{
		cout<<"Queue is full";
				if(val.front==0)
					val.rear=4;
				else
					(val.rear)--;

	}
	else {
		val.list[val.rear]=val.dataI;


	}



	cout<<"Contain of Queue"<<(val.list[val.rear])<<endl;

}

int QueueOp::deleteQueue(QueueOp del)
{
	if(del.front == del.rear)
	{
		cout<<"Queue is empty";
		return 0;
	}
	else
	{
		del.front = del.front + 1;
	}



}

bool QueueOp::emptyQueue()
{
	return (front == rear);

}

int main()

{
    int c;
    QueueOp obj1;
   // obj1.front  = 4;
    //cout<<"Welcome to the Queue Operations"<<endl;
	//cout<<"You can perform following basic operation"<<endl;
	//cout<<"insert item and delete item"<<endl;
    cout<<"To push in Queue press 1 to delete press 2";
    cin >> c;
//	cout<<"value="<<obj1.dataI;
    //if (c==1)
    //{
    	for(int i=0;i<5;i++)
    	{
    		obj1.getData();
    		obj1.insertQueue(obj1);
    	}

	obj1.getData();
	obj1.insertQueue(obj1);
    //}

    //{
    	obj1.getDeldata();
    	obj1.deleteQueue(obj1);
  //}


//	obj1.showlist();
	//cout<<"queue has the elements"<<(obj1.list[obj1.front]);
	return 0;
}
