#include<iostream>
using namespace std;
 
class Pascal {
private:
  int rows;
public:
  Pascal(int row) {rows = row;}
  int printPascal{
  for (int i = 0; i < rows; i++)
    {
      int val = 1;
      for (int j = 1; j < (rows - i); j++)
        {
	  cout << " ";
        }
      for (int k = 0; k <= i; k++)
        {
	  cout << " " << val;
	  val = val * (i - k) / (k + 1);
        }
      cout << endl;
    }
  cout << endl;
  };
  return 0;
};
  
int main ()
{
  int rows;
  cout << "Enter number of rows: " ;
  cin >> rows;
  cout << endl;
  Pascal(rows);
}
