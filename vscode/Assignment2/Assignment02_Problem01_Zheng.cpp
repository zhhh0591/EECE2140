#include<iostream>
#include<cmath>
#include <string>

using namespace std;

//prototype
int decoder(int numbers);
char getLetter(int code);

int numbers = 0;
string temp;
int num;
int main()
{
    do{
    cout << "What would you like to do today" << endl;
    cout << "1: Run the length and sequence input and decode as you implemented." << endl;
    cout << "2: Print a short message explaining 1–26 and A-Z, other numbers ?" << endl;
    cout << "0: Exit" << endl;
    cin >> num;
    switch (num)
    {
        case 1:
        {
            cout << "How many numbers in your secret sequence?" << endl;
            cin >> numbers;

            while (numbers <= 0)
            {
                cout << "Please enter a number greater than 0." << endl;
            cin >> numbers;
            }
            decoder(numbers);
            break;
        }
        case 2:
        cout << "Each number from 1 to 26 represents a letter from A to Z: 1 = A, 2 = B, ..., 26 = Z. Any other number is decoded as ?." << endl;
        break;
        case 0:
        return 0;
        break;
        default:
        cout << "Invalid Option" << endl;
        break;
    }
    
    }while (num != 0);
    return 0;
}
int decoder(int numbers) //Repeatedly asks for each number and make one final text
{
    int code;
    temp.resize(numbers);//The size of the string temp
    for(int k = 0; k < numbers; k++)
    {
        cout << "Whats the secret code of your " << k + 1 << " Letter" << endl;
        cin >> code;
        if(code > 26||code <= 0)//check if the user typoe a right code
        {
        cout << "Invalid code. Valid codes are 1-26; this number will be decoded as ?." << endl;
        }
        temp[k] = getLetter(code);
    }
    cout << "Your message is : " << temp << endl;
    return 0;
}
//the function to convert numbers into letters
char getLetter(int code)
{
    switch(code)
    {
        case 1:
        return 'A';
        break;
        case 2:
        return 'B';
        break;
        case 3:
        return 'C';
        break;
        case 4:
        return 'D';
        break;
        case 5:
        return 'E';
        break;
        case 6:
        return 'F';
        break;
        case 7:
        return 'G';
        break;
        case 8:
        return 'H';
        break;
        case 9:
        return 'I';
        break;
        case 10:
        return 'J';
        break;
        case 11:
        return 'K';
        break;
        case 12:
        return 'L';
        break;
        case 13:
        return 'M';
        break;
        case 14:
        return 'N';
        break;
        case 15:
        return 'O';
        break;
        case 16:
        return 'P';
        break;
        case 17:
        return 'Q';
        break;
        case 18:
        return 'R';
        break;
        case 19:
        return 'S';
        break;
        case 20:
        return 'T';
        break;
        case 21:
        return 'U';
        break;
        case 22:
        return 'V';
        break;
        case 23:
        return 'W';
        break;
        case 24:
        return 'X';
        break;
        case 25:
        return 'Y';
        break;
        case 26:
        return 'Z';
        break;
        default:
        return '?';
        break;
    }

}
