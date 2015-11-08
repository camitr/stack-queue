#include <iostream>
using namespace std;

class QueueOp{
public:
	QueueOp(int num,int rear1, int front1);

	void insertQueue(int);
	void showQueue();
	int deleteQueue();
	bool emptyQueue();
private:
	int *pntList;
	int SizeOfList,rear,front;

};

QueueOp::QueueOp(int num,int rear1, int front1)
{

	SizeOfList = num;
	rear = num;
	front = num;
	pntList = new int[num];

}
void QueueOp::insertQueue(int val)
{

	cout<<"Value for the queue "<<val<<endl;
	if(QueueOp::rear==SizeOfList)
	{
		//cout<<"in the if"<<endl;
		QueueOp::rear=0;
	}
	else
	{
		QueueOp::rear = QueueOp::rear + 1;

	}
	if(QueueOp::rear == QueueOp::front)
	{
		cout<<"Queue is full";
				if(QueueOp::front==0)
					QueueOp::rear=4;
				else
					(QueueOp::rear)--;
	}
	else
	{
		pntList[rear] = val;
	}
}

void QueueOp::showQueue()
{
	int limit = (rear + SizeOfList - front) % SizeOfList + 1;

	cout<<"Queue contains :: "<<endl;

	for(int i = 0;i < limit; i++)
	{
		int index = (front + i) % SizeOfList;
		cout<<'\t'<<pntList[index];
	}
	cout<<endl;

}

int QueueOp::deleteQueue()
{
	if(front == rear)
	{
		cout<<"Queue is empty";
		return 0;
	}
	else
	{
		front = front + 1;
	}
return 0;

}

int main()
{
    int size, queueIpt;
    char term;
    cout<<"enter the size of Queue"<<endl;
    cin>>size;
    QueueOp obj(size,size,size);
    //QueueOp obj1[4];


    for(int i=0;i<10;i++)
    {
    	cout<<"Please enter the element for the Queue"<<endl;
    	cin>>queueIpt;
    	obj.insertQueue(queueIpt);
    	obj.showQueue();
    }

    	obj.deleteQueue();
    	obj.showQueue();

}
