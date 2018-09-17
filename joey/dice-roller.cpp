#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

// returns a random number in the range [numTimes, numSides*numTimes].
unsigned roll(unsigned numTimes, unsigned numSides) {
  unsigned result = 0;

  for (unsigned i = 0; i < numTimes; i++) {
    result += (rand() % numSides) + 1;
  }
  return result;
}

int main()
{
  unsigned numTimes, numSides;

  // position of the 'd' char in the input string.
  unsigned dPos;
  // should be of the form NdM where N is the number of times to roll an M-sided dice
  string dice;

  cout << "input dice type: (in the form 5d12, 3d6, etc...)" << endl;
  cin >> dice;
  
  dPos = dice.find('d');

  // extract info from string
  numTimes = stoi(dice.substr(0u, dPos));
  numSides = stoi(dice.substr(dPos + 1, dice.size() - 1));

  cout << "rolling a " << dice << "..." << endl;
  cout << endl;
  while (true) {
    unsigned result;
    char doAgain;

    result = roll(numTimes, numSides);
    cout << "you rolled: " << result << endl;

    cout << endl << "roll again? (Y/N)" << endl;
    cin >> doAgain;

    if (toupper(doAgain) != 'Y') {
      break;
    }
  }
  return 0;
}