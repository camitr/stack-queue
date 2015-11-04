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
	void showlist()
	{
	//	cout<<"queue contain";
		//for(int i=0;i<5;i++)
		//{
			cout<<(list);
		//}
	}
	void insertQueue(QueueOp);
	int deleteQueue(int dataD);
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

int QueueOp::deleteQueue(int dataD)
{
	return 0;
}

bool QueueOp::emptyQueue()
{
	return (front == rear);

}

int main()

{

    QueueOp obj1;
   // obj1.front  = 4;
    //cout<<"Welcome to the Queue Operations"<<endl;
	//cout<<"You can perform following basic operation"<<endl;
	//cout<<"insert item and delete item"<<endl;

//	cout<<"value="<<obj1.dataI;
	for(int i=0;i<5;i++)
	{
	obj1.getData();
	obj1.insertQueue(obj1);
	}
	obj1.getData();
	obj1.insertQueue(obj1);
//	obj1.showlist();
	//cout<<"queue has the elements"<<(obj1.list[obj1.front]);
	return 0;
}
