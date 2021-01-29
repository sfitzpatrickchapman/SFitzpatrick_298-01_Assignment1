// Scott Fitzpatrick, 2328196
#include <iostream>
using namespace std;

int main() {
  int maxRoomCapacity;
  int numPeopleAttending;

  /* prompt and user input */
  cout << "\nPlease enter the maximum room capacity: ";
  cin >> maxRoomCapacity;
  cout << "Now please enter the amount of people attending: ";
  cin >> numPeopleAttending;

  /* let user know if they have a legal amoung of people attending and the
  amount that should include or exclude */
  if (numPeopleAttending <= maxRoomCapacity && numPeopleAttending > 0) {
    int extraRoom = maxRoomCapacity - numPeopleAttending;
    cout << "The meeting is legal and " << extraRoom <<
    " more people can attend." << endl << endl;
  }
  else if (numPeopleAttending > maxRoomCapacity) {
    int roomToClear = numPeopleAttending - maxRoomCapacity;
    cout << "\nThe meeting would be illegal. You must remove " <<
    roomToClear << " people to meet regulations." << endl << endl;
  }
  else {
    cout << "You need friends to have a meeting." << endl;
  }
}
