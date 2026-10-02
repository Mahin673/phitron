#include <bits/stdc++.h>

using namespace std;

void registration()
{

    string username, password;
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    string savedUsername, savedPassword;

    while (file >> savedUsername >> savedPassword)
    {

        if (savedUsername == username)
        {
            cout << "Username already exists!" << endl;
            file.close();
            return;
        }
    }

    file.close();

    ofstream outFile("users.txt", ios::app);

    outFile << username << " " << password << endl;

    outFile.close();

    cout << "Registration successful!" << endl;
}

void login()
{

    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    string savedUsername, savedPassword;
    bool found = false;

    while (file >> savedUsername >> savedPassword)
    {

        if (savedUsername == username &&
            savedPassword == password)
        {

            found = true;
            break;
        }
    }

    file.close();

    if (found)
    {
        cout << "Login successful!" << endl;
    }
    else
    {
        cout << "Invalid username or password!" << endl;
    }
}

int main()
{

    int choice;

    cout << "===== Login and Registration System =====" << endl;

    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        registration();
    }
    else if (choice == 2)
    {
        login();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}