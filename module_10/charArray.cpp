// Character Array
// char arr[n+1]
//+1 is for null character

#include <iostream>
using namespace std;
int main()
{
    char arr[100] = "Apple Banana";

    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
}
