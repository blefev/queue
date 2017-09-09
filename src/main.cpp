#include <fstream>
#include <string>
#include "queue.h"
using namespace std;

int main()
{
	Queue myQueue;
	ifstream input;
	int cmd, argument, ret;
    node* frontNode = NULL;
	string help = "Commands:\n"
		"1: Enqueue an item.\n"
		"2: Dequeue.\n"
		"3: Get front.\n"
		"4: Check if empty.\n"
		"5: Print the queue.\n"
		"6: Help. \n"
		"7: Quit.\n";

	cout << help;

    // while there is something to read from the file, read
	while ( cin >> cmd)
	{
        // switch on the command we read from the file
		switch (cmd)
		{
        // if the cmd requires a parameter, read it from the file and call the
        // associated function
		case 1:
			cout << "Enter an integer: ";
			cin >> argument;
			myQueue.enq(argument);
            cout << "Added " << argument << " to the queue\n";
			break;
		case 2:
			if(myQueue.deq())
            {
                cout << "Removed front of queue\n";
            }
            else
            {
                cout << "Nothing to remove from the queue\n";
            }
			break;
		case 3:
            frontNode = myQueue.getFront();
            if(NULL == frontNode)
            {
                cout << "Nothing is in the queue\n";
            }
            else
            {
                cout << "Front of the queue contains " << frontNode->val << endl;
            }
            break;
        case 4:
            if(myQueue.isEmpty())
            {
                cout << "Queue is empty\n";
            }
            else
            {
                cout << "Queue has data\n";
            }
            break;
        case 5:
            myQueue.print();
            break;
		case 6:
			exit(0);
        }

	}
	input.close();

	return 0;
}
