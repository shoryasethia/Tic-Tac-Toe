#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char sq[10] = {'o','1','2','3','4','5','6','7','8','9'};
	int player = 1;
	int choice;
	int win = -1;
	do
	{


	cout<<"\tTic Toc Toe Game"<<endl<<endl;
	cout<<"Player 1 (X)  ||  Player 2 (0)"<<endl;

		cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;
	cout << "     |     |     " << endl << endl;

	cout<<"(Player "<<player<<") Enter a number: ";
	cin>>choice;

	if(player == 1)
	{
		switch(choice)
		{
			case 1:
			if(sq[1]=='X'||sq[1]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[1] = 'X';
			  player = 2;
			}
			break;

			case 2:
			if(sq[2]=='X'||sq[2]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[2] = 'X';
			  player = 2;
			}
			break;

			case 3:
			if(sq[3]=='X'||sq[3]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[3] = 'X';
			  player = 2;
			}
			break;
			case 4:
			if(sq[4]=='X'||sq[4]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[4] = 'X';
			  player = 2;
			}
			break;
			case 5:
			if(sq[5]=='X'||sq[5]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[5] = 'X';
			  player = 2;
			}
			break;
			case 6:
			if(sq[6]=='X'||sq[6]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[6] = 'X';
			  player = 2;
			}
			break;
			case 7:
			if(sq[7]=='X'||sq[7]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[7] = 'X';
			  player = 2;
			}
			break;
			case 8:
			if(sq[8]=='X'||sq[8]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[8] = 'X';
			  player = 2;
			}
			break;
			case 9:
			if(sq[9]=='X'||sq[9]=='O')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[9] = 'X';
			  player = 2;
			}
			break;

			default:cout<<"Invalid Move"<<endl;
			cin.get();
			break;
		}
	}
	else
	{
		switch(choice)
		{
			case 1:
			if(sq[1]=='O'||sq[1]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[1] = 'O';
			  player = 1;
			}
			break;

			case 2:
			if(sq[2]=='O'||sq[2]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[2] = 'O';
			  player = 1;
			}
			break;

			case 3:
			if(sq[3]=='O'||sq[3]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[3] = 'O';
			  player = 1;
			}
			break;
			case 4:
			if(sq[4]=='O'||sq[4]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[4] = 'O';
			  player = 1;
			}
			break;
			case 5:
			if(sq[5]=='O'||sq[5]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[5] = 'O';
			  player = 1;
			}
			break;
			case 6:
			if(sq[6]=='O'||sq[6]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[6] = 'O';
			  player = 1;
			}
			break;
			case 7:
			if(sq[7]=='O'||sq[7]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[7] = 'O';
			  player = 1;
			}
			break;
			case 8:
			if(sq[8]=='O'||sq[8]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[8] = 'O';
			  player = 1;
			}
			break;
			case 9:
			if(sq[9]=='O'||sq[9]=='X')
			{
				cout<<"Invalid Move"<<endl;
				cin.get();

			}
			else
			{
			  sq[9] = 'O';
			  player = 1;
			}
			break;

			default:cout<<"Invalid Move"<<endl;
			cin.get();

			break;
		}
	}

	if (sq[1] == sq[2] && sq[2] == sq[3])
		win = 1;
	else if (sq[4] == sq[5] && sq[5] == sq[6])
		win = 1;
	else if (sq[7] == sq[8] && sq[8] == sq[9])
		win = 1;
	else if (sq[1] == sq[4] && sq[4] == sq[7])
		win = 1;
	else if (sq[2] == sq[5] && sq[5] == sq[8])
		win = 1;
	else if (sq[3] == sq[6] && sq[6] == sq[9])
		win = 1;
	else if (sq[1] == sq[5] && sq[5] == sq[9])
		win = 1;
	else if (sq[3] == sq[5] && sq[5] == sq[7])
		win = 1;
	else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' &&
    sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
		win = 0;
	else
		win = -1;

	}
	while(win == -1);

		cout<<"\tTic Toc Toe Game"<<endl<<endl;
	cout<<"Player 1 (X)  ||  Player 2 (0)"<<endl;

			cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;
	cout << "     |     |     " << endl << endl;

	if(win==1)
	{
		if(player == 1)
		{
			player = 2;
		}
		else if(player == 2)
		{
			player = 1;
		}
		cout<<"\aPlayer "<<player<<" win "<<endl;
	}
	else
		cout<<"\aGame draw"<<endl;

	return 0;
}
