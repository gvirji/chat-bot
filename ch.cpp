#include <iostream>

#include <string>

using namespace std;

int main()

{

    cout << "Hello! I am a chatbot. What is your name?" << endl;

    string name;

    getline(cin, name);

    cout << "Nice to meet you, " << name << "!" << endl;

    while (true) {

        cout << "What would you like to talk about?" << endl;

        string input;

        getline(cin, input);

        if (input == "hello" || input == "hi") {

            cout << "Hello there!" << endl;

        } else if (input == "how are you" || input == "how are you doing") {

            cout << "I am doing well, thank you for asking." << endl;

        } else if (input == "what is your name" || input == "who are you") {

            cout << "My name is Chatbot. What can I help you with?" << endl;

        } else if (input == "bye" || input == "goodbye") {

            cout << "Goodbye! It was nice talking to you, " << name << "." << endl;

            break;

        } else {

            cout << "I'm sorry, I don't understand what you mean." << endl;

        }

    }

    return 0;

}

