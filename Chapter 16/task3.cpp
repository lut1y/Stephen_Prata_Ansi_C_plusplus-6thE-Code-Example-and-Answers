// hangman.cpp -- ������������� ��������� ������� ������ �� ��������
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
using namespace std;

int task3() {    
    
    std::vector<string> wordlist;
    string input;
    ifstream fin;    
    int ct = 0;
    fin.open("task3.txt");
    
    if (fin.is_open() == false) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    
    while(fin) {
    	fin >> input;
    	wordlist.push_back(input);
	}
    
    std::srand(std::time(0));
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y') {
        string target = wordlist[std::rand() % wordlist.size()];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
            << " letters, and you guess\n"
            << "one letter at a time. You get " << guesses
            << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target) {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            // find == npos, ���� ��������� �� �������
            if (badchars.find(letter) != string::npos
                || attempt.find(letter) != string::npos) {
                cout << "You already guessed that. Try again.\n";
                    continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos) {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter; // add to string
            } else {
                cout << "Good guess!\n";
                attempt[loc]=letter;
                // ���������, �� ���������� �� ����� ��� ���
                loc = target.find(letter, loc + 1);
                while (loc != string::npos) {
                    attempt[loc]=letter;
                    loc = target.find(letter, loc + 1);
                }
           }
            cout << "Your word: " << attempt << endl;
            if (attempt != target) {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";

        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    fin.close();
    cout << "Bye\n";

    return 0; 
}
