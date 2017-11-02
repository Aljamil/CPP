// Problem ID: 1031065
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work.
 
#include <iostream>
#include <vector>
using namespace std;

void getUnion(vector <int> x, vector <int> y, vector <int> &z) 
{ 

    for (int i = 0; i < x.size(); i++) 
        z.push_back(x[i]); 
	for (int i = 0; i < y.size(); i++) 
	    z.push_back(y[i]);
       
    for(int i = 0; i < z.size(); i++) 
	  for(int j = i + 1; j < z.size(); j++) 
	  { 
	  if(z[i] > z[j]) 
	  { 
	     int temp = z[i]; 
	     z[i] = z[j]; 
		 z[j] = temp; 
	   } 
	  }
 
  vector <int>::iterator it; 
	for(it = z.begin(); it != z.end() - 1;  ) 
	{ 
	  if(*it == *(it+1) ) 
	  { 
	   z.erase(it); 
	   it = z.begin(); 
	  } 
	   else it++; 
	}
	
	
}

int main()
{
  vector <int> x;
  vector <int> y;
  vector <int> z;
  
  x.push_back(13);
  x.push_back(-1);
  x.push_back(30);
  x.push_back(-2);
  x.push_back(10);
  x.push_back(50);
  y.push_back(-2);
  y.push_back(10);
  y.push_back(50);
  y.push_back(30);
  y.push_back(-1);
  y.push_back(31);

  getUnion(x,y,z);

  for (int i = 0; i < z.size(); i++)
    cout << z[i] << " ";
  cout << endl;

  return 0;
}




