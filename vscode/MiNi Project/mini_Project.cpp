// Name: Honghan Zheng
// Course: EECE 2140 - Computing Fundamentals for Engineers
// Assignment: Mini-Project 1 - The Tortoise and the Hare
// Date: October 29, 2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
const int upper_num = 120;
const int lower_num = 1;
const int finish_line = 60;

int tortoise_move(int position);
int hare_move(int position);
void display_course(int tortoise_position, int hare_position);


int main()
{
    srand(time(0));
    int tortoise_wins = 0;
    int hare_wins = 0;
    int ties = 0;

    for (int game = 1; game <= 50; game++)
    {
        int tortoise_position = 1;
        int hare_position = 1;
        cout << "\n===== Game " << game << " =====\n";
        cout << "BANG! AND THEY'RE OFF!!!!!\n";

        while (true)
        {
            tortoise_position = tortoise_move(tortoise_position);
            hare_position = hare_move(hare_position);
            display_course(tortoise_position, hare_position);

            bool tortoise_done = tortoise_position >= finish_line;
            bool hare_done = hare_position >= finish_line;
            if (tortoise_done && hare_done) {
                cout << "It's a TIE\n";
                ties++;
                break;
            }
            else if (tortoise_done) {
                cout << "TORTOISE WINS!!! YAY!!!\n";
                tortoise_wins++;
                break;
            }
            else if (hare_done) {
                cout << "HARE WINS. YUCH!\n";
                hare_wins++;
                break;
            }
        }
    }

    cout << "\n===== Results after 50 games =====\n";
    cout << "Tortoise wins: " << tortoise_wins << "\n";
    cout << "Hare wins:     " << hare_wins << "\n";
    cout << "Ties:          " << ties << "\n";
    return 0;
}

int tortoise_move(int position)
{
    int i = rand() % (upper_num - lower_num + 1) + lower_num;
    // the modulo operator (%) works on integers, so i is in 1..120
    int choice = 0;// initiallize the choice
    if ((i >= 1) && (i <= 36)) {
        choice = 1;
    }
    else if ((i >= 37) && (i <= 60)) {
        choice = 2;
    }
    else if ((i >= 61) && (i <= 120)) {
        choice = 3;
    }

    switch (choice)
    {
        case 1: // Fast Plod 30%
            position += 3;
            break;
        case 2: // Slip 20%
            position -= 6;
            break;
        case 3: // Slow Plod 50%
            position += 1;
            break;
    }

    if (position < 1) {
        position = 1;
    }
    return position;
}

int hare_move(int position)
{
    int i = rand() % (upper_num - lower_num + 1) + lower_num;
    int choice = 0;
    if ((i >= 1) && (i <= 12)) {
        choice = 1;
    }
    else if ((i >= 13) && (i <= 36)) {
        choice = 2;
    }
    else if ((i >= 37) && (i <= 48)) {
        choice = 3;
    }
    else if ((i >= 49) && (i <= 96)) {
        choice = 4;
    }
    else if ((i >= 97) && (i <= 120)) {
        choice = 5;
    }

    switch (choice)
    {
        case 1: // Sleep 10%
            break;
        case 2: // Big Hop 20%
            position += 8;
            break;
        case 3: // Big Slip 10%
            position -= 10;
            break;
        case 4: // Small Hop 40%
            position += 1;
            break;
        case 5: // Small Slip 20%
            position -= 2;
            break;
    }

    if (position < 1) {
        position = 1;
    }
    return position;
}

void display_course(int tortoise_position, int hare_position)
{
    string course = "";
    // an animal that passed the finish line is drawn on square 60
    if (tortoise_position > finish_line) tortoise_position = finish_line;
    if (hare_position > finish_line) hare_position = finish_line;
    for (int square = 1; square <= finish_line; square++)
    {
        if ((square == tortoise_position) && (square == hare_position)) {
            course += "OUCH!!!";
        }
        else if (square == tortoise_position) {
            course += "T";
        }
        else if (square == hare_position) {
            course += "H";
        }
        else {
            course += "-";
        }
    }
    cout << course << "\n";
}
