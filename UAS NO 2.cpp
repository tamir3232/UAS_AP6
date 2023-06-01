#include <string>
#include <iostream>
#include <fstream>
#include <dirent.h>
#include <ctime>

using namespace std;

#define RESET "\033[0m"
#define YELLOW "\033[33m"
#define RED "\033[31m"
#define GREEN "\033[32m"

struct Note{
    string fileName;
    string text;
    string line;
};

class Menu{
    public:
        void createNote(){
            Note note;
            cout << endl << string(15,'=') << " CREATE NOTE " << string(15,'=') << endl;
            cout << "\nEnter Notepad name: ";
            getline(cin,note.fileName);

            ofstream file(note.fileName + ".txt", ios::app);

            if (file.is_open()){
                time_t now = time(0);
                char* dateTime = ctime(&now);
                file << "Created on: " << dateTime << endl;
                cout << GREEN << "Note created successfully!" << RESET << endl;
                file.close();
            } else {
                cout << RED << "Unable to create note" << RESET << endl;
            }
        }

        void writeNote(){
            Note note;
            cout << endl << string(15,'=') << " WRITE NOTE " << string(15,'=') << endl;
            cout << "\nEnter Note name: ";
            getline(cin,note.fileName);

            ofstream file(note.fileName + ".txt", ios::app);

            if (file.is_open()){
                cout << "Write your note (press enter to save): \n";
                while(getline(cin,note.text) && !note.text.empty()){
                    file << note.text << endl;
                }
                cout << GREEN << "Note saved successfully!" << RESET << endl;

                ofstream newFile(note.fileName + ".txt", ios::app);

                if (newFile.is_open()){
                    newFile << endl << "Last edited on: ";
                    time_t now = time(0);
                    char* dateTime = ctime(&now);
                    newFile << dateTime << endl;
                    newFile.close();
                }
            } else {
                cout << RED << "Failed to open note!" << RESET << endl;
            }

            file.close();
        }

        void deleteNote(){
            Note note;
            cout << endl << string(15,'=') << " DELETE NOTE " << string(15,'=') << endl;
            cout << "Enter Note name: ";
            getline(cin, note.fileName);

            note.fileName += ".txt";

            if (remove(note.fileName.c_str()) == 0) {
                cout << GREEN << "Note deleted successfully!" << RESET << endl;
            } else {
                cout << RED << "Failed to detele note!" << RESET << endl;
            }
        }

        void displayNotes(){
            Note note;
            cout << endl << string(15,'=') << " DISPLAY NOTES " << string(15,'=') << endl;

            DIR* dir;
            dirent* entry;

            dir = opendir(".");
            if (dir != nullptr){
                while ((entry = readdir(dir)) != nullptr){
                    note.fileName = entry -> d_name;
                    if (note.fileName.length() >= 4 && note.fileName.substr(note.fileName.length() - 4) == ".txt"){
                        cout << YELLOW << note.fileName << endl;
                    }
                }
                cout << RESET;
                closedir(dir);
            } else {
                cout << RED << "Unable to open directory!" << endl;
            }
        }
};

int main(){
    system("CLS");
    Menu menu;
    int choice;

    do {
        cout << string(15,'=') << " SIMPLE NOTEPAD " << string(15,'=') << endl;
        cout << "\n1. Create Note\n2. Write Note\n3. Delete Note\n4. Display Note\n5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: menu.createNote();
                break;
            case 2: menu.writeNote();
                break;
            case 3: menu.deleteNote();
                break;
            case 4: menu.displayNotes();
                break;
            case 5: cout << GREEN << "Thanks for choosing our program!" << RESET << endl;
                break;
            default: cout << RED << "Invalid choice. Please try again!" << RESET << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}