#include <iostream>
using namespace std;
int main() {
int length, breadth;
cout << "Enter the length ";
cin >> length ;
cout << "Enter the breadth ";
cin >> breadth ;
int area = length * breadth;
int perimeter = 2 * (length + breadth);
if (area > perimeter) cout << "Area is greater than perimeter.";
else cout << "Perimeter is greater than area.";
return 0;
}