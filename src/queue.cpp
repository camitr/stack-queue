#include <iostream>

using namespace std;
class QueueOp{
public:
	int list[5], front,dataI,dataD;
	static int rear;
	void getData()
	{
		cout<<"enter the element";
		cin>>dataI;
	}
	void showlist()
	{
		cout<<"queue contain";
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

void QueueOp::insertQueue(QueueOp val)
{
	//cout<<"value"<<val.dataI;
	cout<<"value before"<<QueueOp::rear<<endl;
	if(QueueOp::rear==4)
	{
		cout<<" I m in first if cond"<<endl;
		QueueOp::rear=0;
	}
	else
	{
		cout<<"rear is increment"<<endl;
		QueueOp::rear = QueueOp::rear + 1;
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
	cout<<"rear value"<<val.rear<<endl;
	cout<<"from insert fun queue contain"<<*(val.list)<<endl;
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
	cout<<"value of rear and "<<endl;
    QueueOp obj1;
    obj1.front  = 4;
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
