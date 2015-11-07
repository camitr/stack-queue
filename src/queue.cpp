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

		cout<<"in the else"<<endl;
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
	cout<<"Queue contains :: "<<endl;
	for(int i = 0;i < SizeOfList; i++)
	{
		cout<<'\t'<<pntList[i];
	}
	cout<<endl;


}
//int QueueOp::deleteQueue(QueueOp del)
//{
	//if(del.front == del.rear)
	//{
		//cout<<"Queue is empty";
	//	return 0;
	//}
	//else
	//{
		//del.front = del.front + 1;
//	}

//	cout<<"Contain of the queue after delete"<<endl<<(del.list[del.rear])<<endl;

//}

//bool QueueOp::emptyQueue()
//{
	//return (front == rear);

//}

int main()

{
    int size, queueIpt;
    char term;
    cout<<"enter the size of Queue"<<endl;
    cin>>size;
    QueueOp obj(size,size,size);
    //QueueOp obj1[4];


    for(int i=0;i<10;i--)
    {
    	cout<<"Please enter the element for the Queue"<<endl;
    	cin>>queueIpt;
    	obj.insertQueue(queueIpt);
    	obj.showQueue();
    }



}
