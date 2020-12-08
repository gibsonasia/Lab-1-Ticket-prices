//Asia Gibson  
#include <iostream>
using namespace std;

double ticketCost(){
  double ticketPrice = 10.0;
  int numTickets = 2;
  
  double totalValue = ticketPrice * numTickets;
  return totalValue;
}
double ticketCost(double ticketPrice){
  int numTickets = 2;
  
  double totalValue = ticketPrice * numTickets;
  return totalValue;
}
// define ticketCost function
double ticketCost(double p, int t){
  double cost = p * t;
  return cost;
}
// define first overloaded schoolCost function
double schoolCost(double price){
  double product = price * 2;
  return product;
}

// define second overloaded 
double schoolCost(double price, double housingFee){
  double total = (housingFee + price) * 4;
  return total;
}

int main() {
  // test ticketCost function with default values
  cout << ticketCost() << "\n";
  cout << ticketCost(7.50) << "\n";
  cout << ticketCost(12.50, 4) << "\n";
    
  // test first overloaded schoolCost function
  cout << schoolCost(500.00, 125.00) << "\n";

  // test second overloaded schoolCost function
  cout << schoolCost(375.00);
}
