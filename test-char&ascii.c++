#include <iostream>
using namespace std;

int main()
{
 
    char x;
    cout << "Enter A Letter: ";
    cin >> x;

    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
        cout << "Yes, This Is A Letter" << endl;
    } if (x >= 'A' && x <= 'Z') {
        cout << "This Is A (Capital)." << endl;
    }
    else if (x >= 'a' && x <= 'z') {
        cout << "This Is A (Small)." << endl;
    }
    else {
        cout << "This Is NOT A Letter." << endl;
    }

    cout << "The ASCII Value: " << x << " IS => " << int(x);
      
    return 0;

}
