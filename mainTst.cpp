#include <iostream>
using namespace std;

#include "main.h"

int main() {
  // Create a new ListT using dynamic memory allocation
  ListT* lst1 = new ListT;

  // Create a static list
  ListT lst;

  cout << "Test PutItemH and Print" << endl;
  cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
  for (int i = 0; i < 5; i++)
    lst.PutItemH(i);
  lst.Print();

  cout << endl;

  // Check if the static list is empty
  cout << "Is the list empty? (Test 1)" << endl;
  cout << "Expected: 1 (true)" << endl;
  cout << lst.IsEmpty() << endl; // Output: 1 (true)
  cout << endl;

  // Check the length of the static ListT
  cout << "Length of the ListT (Test 1)" << endl;
  cout << "Expected: 5" << endl;
  cout << lst.GetLength() << endl; // Output: 5
  cout << endl;

  // Add items 1 to 5 to the static ListT
  cout << "Adding items 1 to 5 to the static ListT" << endl;
  cout << "Expected: 5 4 3 2 1" << endl;
  for (int i = 1; i < 6; i++)
    lst.PutItemH(i);
  lst.Print();

  // Add items 1 to 5 to the dynamic ListT
  cout << "Adding items 1 to 5 to the dynamic ListT" << endl;
  cout << "Expected: 5 4 3 2 1" << endl;
  for (int i = 1; i < 6; i++)
    lst1->PutItemH(i);
  lst1->Print();

  // Check if the dynamic ListT is empty
  cout << "Is the ListT empty? (Test 2)" << endl;
  cout << "Expected: 0 (false)" << endl;
  cout << lst1->IsEmpty() << endl; // Output: 0 (false)
  cout << endl;

  // Check the length of the dynamic ListT
  cout << "Length of the ListT (Test 2)" << endl;
  cout << "Expected: 5" << endl;
  cout << lst1->GetLength() << endl; // Output: 5
  cout << endl;

  // Get the item at the head of the dynamic ListT
  cout << "Get the item at the head of the ListT" << endl;
  cout << "Expected: 5" << endl;
  cout << lst1->GetItemH() << endl; // Output: 5
  cout << endl;

  // Print the dynamic ListT
  cout << "Print the ListT (Test 2)" << endl;
  cout << "Expected: 5 4 3 2 1" << endl;
  lst1->Print();
  cout << endl;

  // Delete the item at the head of the dynamic ListT
  cout << "Delete the item at the head of the ListT" << endl;
  cout << "Expected: 4 3 2 1" << endl;
  lst1->DeleteItemH();
  lst1->Print();
  cout << endl;

  // FindItem occurrences of items in the dynamic ListT
  cout << "FindItem occurrences of items in the ListT" << endl;
  cout << "Expected: 5, 1, 1, 0" << endl;
  lst1->Print();
  cout << "Occurrences of 5: " << lst1->FindItem(5) << endl;
  cout << "Occurrences of 3: " << lst1->FindItem(3) << endl;
  cout << "Occurrences of 1: " << lst1->FindItem(1) << endl;
  cout << "Occurrences of 0: " << lst1->FindItem(0) << endl;
  cout << endl;

  cout << "Expected: 2 1 0 3" << endl;
  lst1->PutItemH(2);
  lst1->PutItemH(2);
  lst1->PutItemH(1);
  cout << lst1->DeleteItem(2) << endl;
  cout << endl;
  lst1->Print();
  cout << endl;

  cout << "Expected: 1 1 0" << endl;
  cout << lst1->DeleteItem(3) << endl;
  cout << endl;
  lst1->Print();

  cout << "Expected: 2 0" << endl;
  lst1->DeleteItem(0);
  lst1->DeleteItem(3);
  cout << endl;
  lst1->PutItemH(1);
  lst1->PutItemH(0);
  cout << lst1->DeleteItem(1) << endl;
  cout << endl;
  lst1->Print();
  delete lst1;
  
  // Delete items from the dynamic ListT
  delete lst1;
  cout << "Delete items from the ListT" << endl;
  cout << "Deleting target from various positions" << endl;
  cout << "Expected: 2 0 2 3 2 0 3" << endl;
  lst1->PutItemH(3);
  lst1->PutItemH(2);
  lst1->PutItemH(0);
  lst1->PutItemH(2);
  lst1->Print();
  cout << lst1->DeleteItem(2) << endl;
  cout << endl;
  lst1->Print();
  cout << endl;


  return 0;
}