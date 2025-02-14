#include <bits/stdc++.h>
using namespace std;

class Chai {
  public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // parameter constructor
    Chai(string name, int serve, vector<string> ingr) {
      teaName = name;
      servings = serve;
      ingredients = ingr;
      cout << "Param constructor called \n";
    }

    void displayChaiDetails () {
      cout << "Tea Name: "  << teaName << endl;
      cout << "Servings: " << servings << endl;
      cout << "Ingredients: ";
      for (string ingredient: ingredients) {
        cout << ingredient << " ";
      }
      cout << endl;
    };
};

int main () {
  Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});

  lemonTea.displayChaiDetails();

  return 0;
}
