#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <ctype.h>
#include <ctime>
using namespace std;

int string_to_int(string s)
{
istringstream strm;
strm.str(s);
int n = 0;
strm >> n;
return n;
}

int main()
{
srand(time(0));
cout << endl;
string X;
bool player = true;
int n = 10;
int count = 2;
int re_count = 2;
int re = 10;
int result1 = 0;
int result2 = 0;
bool won = false;

cout << "You are gonna play tic tac toe." << endl;
cout << "Player 1 plays with [X], Player 2 plays with [O]." << endl;
string player1;
string player2;
cout << endl;
cout << "Enter name for player1: ";
cin >> player1;
cout << "Enter name for player2: ";
cin >> player2;
cout << "Choose a number to put your sign there." << endl << endl;


string a = "    |    |     \n";
string b = " 1  | 2  | 3   \n";
string c = "____|____|____ \n";
string d = "    |    |     \n";
string e = " 4  | 5  | 6   \n";
string f = "____|____|____ \n";
string g = "    |    |     \n";
string k = " 7  | 8  | 9   \n";
string p = "    |    |     \n";



cout << a << b << c << d << e << f << g << k;


bool play_again = true;
const long int array_size = 100000;
while(play_again == true) {

int buffer[array_size] ={0,0,0,0,0,0,0,0,0};
while(won == false) {


 system("cls");
 cout << a << b << c << d << e << f << g << k;
 if(count % 2 == 0) {cout << endl << player1 << "'s turn(X): ";
}
else {cout << endl << player2 << "'s turn(O): ";}
while(n > 9 ) {

       // cin  >> X;
        while(X[0] = '0') {
            if(X[0] != '0') {break;}
                cout << "Enter a number: "; cin >> X;

        if(X[0] != '0') {break;}
        }
        int n = string_to_int(X);
        if(n > array_size) {
            cout << "Somebody is entering too big numbers!" << endl;
            return 1;
        }

        buffer[n-1] = buffer[n-1] + n;
        while(buffer[n-1] != n) {
        cout <<  "This square is already taken! " << endl << "Try new number: ";
       // cout << buffer[n-1] << endl;
        buffer[n-1] = buffer[n-1] - n;
       // cout << buffer[n-1] << endl;
        cin >> X;
        n = string_to_int(X);

        if(n-1 == n) {break;}
            buffer[n-1] = buffer[n-1] + n;

     }

       if(n < 10 && n > 0) {break;}
       cout <<  "Please enter a valid number!" << endl;
    }




if(count % 2 == 0) {
    player = true;
}
else {player = false;}
count++;


if(X[0] == '1' && player == true) {
   b[1] = 'X';
}

else if(X[0] == '1' && player == false) {
    b[1] = 'O';
}

else if(X[0] == '2' && player == true) {
    b[6] = 'X';
}

else if(X[0] == '2' && player == false) {
    b[6] = 'O';
}

else if(X[0] == '3' && player == true) {
    b[11] = 'X';
}

else if(X[0] == '3' && player == false) {
    b[11] = 'O';
}

else if(X[0] == '4' && player == true) {
    e[1] = 'X';
}

else if(X[0] == '4' && player == false) {
    e[1] = 'O';
}

else if(X[0] == '5' && player == true) {
    e[6] = 'X';
}

else if(X[0] == '5' && player == false) {
    e[6] = 'O';
}

else if(X[0] == '6' && player == true) {
    e[11] = 'X';
}

else if(X[0] == '6' && player == false) {
    e[11] = 'O';
}


else if(X[0] == '7' && player == true) {
    k[1] = 'X';
}

else if(X[0] == '7' && player == false) {
    k[1] = 'O';
}

else if(X[0] == '8' && player == true) {
    k[6] = 'X';
}

else if(X[0] == '8' && player == false) {
    k[6] = 'O';
}

else if(X[0]== '9' && player == true) {
    k[11] = 'X';
}

else if(X[0] == '9' && player == false) {
    k[11] = 'O';
}



cout << a << b << c << d << e << f << g << k;

if((b[1] ==  'X' && b[6] ==  'X' && b[11] == 'X') || (e[1] ==  'X' && e[6] ==  'X' && e[11] ==  'X') || (k[1] ==  'X' && k[6] ==  'X' && k[11] ==  'X') ||
   (b[1] ==  'X' && e[1] ==  'X' && k[1] ==  'X') || (b[6] ==  'X' && e[6] ==  'X' && k[6] == 'X')  || (b[11] ==  'X' && e[11] ==  'X' && k[11] == 'X') ||
   (b[1] ==  'X' && e[6] ==  'X' && k[11] ==  'X') || (b[11] ==  'X' && e[6] ==  'X' && k[1] ==  'X'))
    {
    cout << endl  << player1 <<" is the winner!" << endl;
    re_count++;
    re++;
    result1++;
    cout << player1 << ": " << result1  << endl << player2 << ": " << result2  << endl;
    won = true;
}

else if((b[1] ==  'O' && b[6] ==  'O' && b[11] == 'O') || (e[1] ==  'O' && e[6] ==  'O' && e[11] ==  'O') || (k[1] ==  'O' && k[6] ==  'O' && k[11] ==  'O') ||
   (b[1] ==  'O' && e[1] ==  'O' && k[1] ==  'O') || (b[6] ==  'O' && e[6] ==  'O' && k[6] == 'O')  || (b[11] ==  'O' && e[11] ==  'O' && k[11] == 'O') ||
   (b[1] ==  'O' && e[6] ==  'O' && k[11] ==  'O') || (b[11] ==  'O' && e[6] ==  'O' && k[1] ==  'O'))
    {
    cout << endl  << player2 <<" is the winner!" << endl;
    re_count++;
    re++;
    result2++;
    cout << player1 << ": " << result1  << endl << player2 << ": " << result2  << endl;
    won = true;
}

else if(count > re && won == false) {cout << endl << "It is a draw!" << endl;
re_count++;
re++;
cout << player1 << ": " << result1 << endl << player2 << ": " << result2  << endl;
break;
}




}
char y_n;
cout << endl << "Do you want to play again?(y/n) ";
cin >> y_n;
char Y = tolower(y_n);

if(Y != 'y' && Y != 'yes') {
    play_again = false;
}

else {won = false;

b[1] = '1';
b[6] = '2';
b[11] = '3';
e[1] =  '4';
e[6] = '5';
e[11] = '6';
k[1] = '7';
k[6] = '8';
k[11] = '9';
count = re_count;
cout << a << b << c << d << e << f << g << k << endl;

}





}
return 0;
}
