#include <iostream>

using namespace std;

int volume(int height, int width, int length);

int main() {

  struct Box{
    int Height;
    int Width;
    int Length;
  };

int main()
{
  struct Box box1,box2;
  int totalVolume; 

   
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Height of Box 1;
    cout << "Enter Box 1 Width : ";
    cin >> Width of Box 1;
    cout << "Enter Box 1 Length : ";
    cin >> Length of Box 1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height of Box 2;
    cout << "Enter Box 2 Width : ";
    cin >> Width of Box 2;
    cout << "Enter Box 2 Length : ";
    cin >> Length of Box 2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.Height,box1.width,box1.Length) + volume( box2.Height,box2.width,box2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume (int height, int width, int length)
{
  return height*width*length;
}

// Implement the functions here