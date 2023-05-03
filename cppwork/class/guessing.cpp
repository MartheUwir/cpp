#include <iostream>
#include <cstring>
#include <array>
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));
  cout << "Choose from the category below : " << endl;
  int category;
  string categories[] = {"Animals", "Districts", "book"};
  int size1 = sizeof(categories) / sizeof(categories[0]);
  for (int i = 0; i < size1; i++)
  {
    cout << i + 1 << ". " << categories[i] << endl;
  };
  int trials = 8;
  string animals[] = {
      "dog", "cat", "cheetah", "tiger", "lion", "elephant", "leopard", "snake", "antelope", "zebra", "cow", "hyena"};
  string Districts[] = {
      "Nyarugenge", "Kicukiro", "Nyabihu", "Musanze", "Gasabo", "Kicukiro"};
  string book[] = {
      "English", "french", "Math", "java", "geograph", "chemistry"};
start:
  cout << "Input a category from the list above: ";
  cin >> category;
  int size2 = sizeof(animals) / sizeof(animals[0]);
  string nameAnimal;
  string activeAnimal;
  if (category == 1)
  {
    int randomNum = rand() % size2;
    cout << randomNum << endl;
    cout << "Guess the name of the animal : ";
    nameAnimal = animals[randomNum];
    for (int i = 0; i < nameAnimal.length(); i++)
    {
      activeAnimal += '_';
    }
    cout << activeAnimal << endl;
    do
    {
      char character;
      cout << "Enter the Character : " << endl;
      cin >> character;
      for (int j = 0; j < nameAnimal.length(); j++)
      {
        if (nameAnimal[j] == character)
        {
          activeAnimal[j] = character;
        }
      }
      trials--;
      cout << "Your guess becomes : " << activeAnimal << endl;
      cout << "Remaining with " << trials << " trials" << endl;
      if (activeAnimal == nameAnimal)
      {
        cout << "------------------Finally---------------" << endl;
        cout << "Your guessed word is: " << activeAnimal << endl;
        goto congs;
      }
      if ((trials == 8) && (activeAnimal != nameAnimal))
      {
        goto outgame;
      }
    }
         while (trials > 0);
  }
  else if (category == 2)
  {
    int size3 = sizeof(Districts) / sizeof(Districts[0]);
    string nameFruit;
    string activeFruit;
    int randomFruit = rand() % size3;
    cout << randomFruit << endl;
    cout << "Guess the name of the fruit : ";
    nameFruit = Districts[randomFruit];
    for (int i = 0; i < nameFruit.length(); i++)
    {
      activeFruit += '_';
    }
    cout << activeFruit << endl;
    do
    {
      char character;
      cout << "Enter the Character : " << endl;
      cin >> character;
      for (int j = 0; j < nameFruit.length(); j++)
      {
        if (nameFruit[j] == character)
        {
          activeFruit[j] = character;
        }
      }
      trials--;
      cout << "Your guess becomes : " << activeFruit << endl;
      cout << "Remaining with " << trials << " trials" << endl;
      if (activeFruit == nameFruit)
      {
        cout << "------------------Finally---------------" << endl;
        cout << "Your guessed word is: " << activeFruit << endl;
        goto congs;
      }
      if ((trials == 8) && (activeFruit != nameFruit))
      {
        goto outgame;
      }
    } while (trials > 0);
  }
  else if (category == 3)
  {
    int size4 = sizeof(book) / sizeof(book[0]);
    string nameDevice;
    string activeDevice;
    int randomDevice = rand() % size4;
    cout << randomDevice << endl;
    cout << "Guess the name of the device : ";
    nameDevice = book[randomDevice];
    for (int i = 0; i < nameDevice.length(); i++)
    {
      activeDevice += '_';
    };
    cout << activeDevice << endl;
    do
    {
      char character;
      cout << "Enter the Character : " << endl;
      cin >> character;
      for (int j = 0; j < nameDevice.length(); j++)
      {
        if (nameDevice[j] == character)
        {
          activeDevice[j] = character;
        }
      }
      trials--;
      cout << "Your guess becomes : " << activeDevice << endl;
      cout << "Remaining with " << trials << " trials" << endl;
      if (activeDevice == nameDevice)
      {
        cout << "------------------Finally---------------" << endl;
        cout << "Your guessed word is: " << activeDevice << endl;
        goto congs;
      }
      if ((trials == 8) && (activeDevice != nameDevice))
      {
        goto outgame;
      }
    } while (trials > 0);
  }
  else
  {
    cout << "Invalid category!!";
  }
outgame:
{
  cout << "You are out of game!" << endl;
  goto replay;
}
congs:
  cout << "You made it!!" << endl;
replay:
  char option;
  cout << " Do you want to play again (N/Y) : ";
  cin >> option;
  if (option == 'Y')
  {
    goto start;
  }
  else
  {
    goto terminate;
  }
terminate:
  return 0;
}



