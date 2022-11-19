#include <iostream>

using namespace std;

struct Student {
    string id;
    string name;
    string major;
    double score = 0;
};

int main() {
    Student example;

    cout << "Please enter the id: " << endl;
    getline(cin, example.id);
    cout << "Please enter the name: " << endl;
    getline(cin, example.name);
    cout << "Please enter the major: " << endl;
    getline(cin, example.major);
    cout << "Please enter the score: " << endl;
    cin >> example.score;

    cout << "\nHere is the info: " << endl
         << "id:\t" << example.id << endl
         << "name:\t" << example.name << endl
         << "major:\t" << example.major << endl
         << "score:\t" << example.score << endl;
}