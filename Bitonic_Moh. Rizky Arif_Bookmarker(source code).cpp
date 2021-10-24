#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main() {
    vector<string> bookmarkS{};
    string bookmarkTitle{};
    string bookmarkLink{};
    string bookmarkTL{};
    char choice{ 'q' };
    unsigned int bookmarkPosition{};

    do {
        cout << "*************************" << endl;
        cout << "Welcome to bookmarker!\nwhat do you want to do ?\n";
        cout << "A. See bookmark lists" << endl;
        cout << "B. Add a new bookmark" << endl;
        cout << "C. Remove an existing bookmark!" << endl;
        cout << "Q. quit" << endl;
        cout << "************************* : ";
        cin >> choice;
        cin.ignore();
        if (choice == 'A' || choice == 'a') {
            if (bookmarkS.size() == 0) {
                cout << "Bookmark is empty, please add a new bookmark!!" << endl;
            }
            else {
                for (size_t i = 0; i < bookmarkS.size(); i++) {
                    cout << i + 1 << ". " << bookmarkS.at(i) << endl;
                }
            }
        }
        else if (choice == 'b' || choice == 'B') {
            cout << "Enter the bookmark title! ";
            getline(cin, bookmarkTitle);
            cout << "Enter the bookmark link! ";
            getline(cin, bookmarkLink);
            bookmarkTL = bookmarkTitle + "\n\t" + bookmarkLink;
            bookmarkS.push_back(bookmarkTL);
            cout << "New bookmark successfully added!" << endl;
        }
        else if (choice == 'c' || choice == 'C') {
            cout << "Enter the bookmark number you want to erase!: ";
            cin >> bookmarkPosition;
            if (bookmarkPosition - 1 >= bookmarkS.size()) {
                cout << "Out of range!!!!! plese enter the correct number >:C" << endl;
            }
            else {
                bookmarkS.erase(bookmarkS.begin() + bookmarkPosition - 1);
                cout << "Bookmark number " << bookmarkPosition << " successfully erased!" << endl;
            }
        }
        else if (choice == 'q' || choice == 'Q') {
            cout << "Goodbye! see you later!!!" << endl;
        }
        else {
            cout << "Please enter one of the choices! (A, B, C, or Q)" << endl;
        }
    } while (choice != 'q' && choice != 'Q');
}