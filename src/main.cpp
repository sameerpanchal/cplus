#include <iostream>
using namespace std;


class linkedlist
{

public:
	struct node
	{
		int iNode_data;
		int *next_addr;
		int *prev_addr;
	};
	
private:
};

int main()
{
	linkedlist list;
	linkedlist::node nodelist;
	int *aData = NULL;
	int iData = 0;
	int counter = 0;
	aData = new int[5];
	
	cout << "Enter 5 numbers.\n";
	for ( ; counter < 5; )
	{
		if(!(cin>>iData))
		{
			cout<<"NON-Integer\n";
		}
		else
		{
			cout<<"Integer\n";
			aData[counter] = iData;
			counter++;
		}
		cin.clear();
		while (cin.get() != '\n') ;
	}
	cout << "Entered Numbers:\n";
	for ( counter = 0; counter < 5; counter++)
	{
		nodelist.iNode_data = aData[counter];
		nodelist.next_addr = aData+1;
		cout<<"Data:"<<nodelist.iNode_data<<"- Next_Data:"<<nodelist.next_addr[counter]<<endl;
	}
		//cout << aData[counter]<<endl;
	/*int *aData = NULL;
	data *list;
	list = new data;
	
	cout << "Enter 10 numbers.\n";
	
	for ( ; counter < 10; )
	{
		if(!(cin>>iData))
		{
			cout<<"NON-Integer\n";
		}
		else
		{
			cout<<"Integer\n";
			aData[counter] = iData;
			counter++;
		}
		cin.clear();
		while (cin.get() != '\n') ;
	}
	
	cout << "Entered Numbers:\n";
	for ( counter = 0; counter < 10; counter++)
	{
		list->list_data = aData[counter];
		list->next_addr = aData+1;
		cout<<"Data:"<<list->list_data<<"- Next_Data:"<<list->next_addr[counter]<<endl;
		//cout << aData[counter]<<endl;
	}
	*/
	return 0;
}
