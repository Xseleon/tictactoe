
#include <iostream>
#include <vector>
#include <string>

int main()
{
   
    using std::cout;
    using std::cin;

    //looking at static arrays
    int arrayLength = 3;

    int myArray[3] = { 1,56,-123 };

    for (int i = 0; i < arrayLength; i++) {

        cout << myArray[i] << std::endl;
    }

    const int row = 3;
    const int column = 3;
    int twoDimensional[row][column] = { {1,2,3}, {2,3,4}, {3,4,5} };

    for (int i = 0; i < arrayLength; i++) {

        for (int j = 0; j < arrayLength; j++) {
            cout << twoDimensional[i][j] << std::endl;
        }
    }

    //vector arrays

    std::vector<int> dynamicArray(3);

    for (int i = 0; i < dynamicArray.size(); i++) {

        dynamicArray[i] = i;
        cout << dynamicArray[i];
    }

    //can add another element to a full array, making it larger
    dynamicArray.push_back(345);

    for (int i = 0; i < dynamicArray.size(); i++) {

        cout << std::endl << dynamicArray[i];
    }


    //strings

    std::string myString = "This is a string";

    cout << myString << std::endl;

    cout << "Enter a line of text" << std::endl;

    std::getline(cin, myString);

    cout << "The line you entered was " << myString << std::endl;

    int lengthOfString = myString.length();

    cout << "Length of string is: " << lengthOfString << std::endl;

}
