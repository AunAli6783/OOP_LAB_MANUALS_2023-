//#include <iostream>
//using namespace std;
//class item
//{
//public:
//
//	string name;
//	string vendor;
//	double price;
//	double cost;
//	double weight;
//	bool tax;
//	item(string n, double c, double p)
//	{
//		name = n;
//		cost = c;
//		price = p;
//		weight = 1;
//		tax = true;
//	}
//	 string getname()
//	{
//		 return name;
//		
//	}
//	 string getvendor()
//	 {
//		 return vendor;
//
//	 }
//	 double getprice()
//	 {
//		 return price;
//
//	 }
//	 double getweight()
//	 {
//		 return weight;
//
//	 }
//	 bool gettax()
//	 {
//		 return tax;
//
//	 }
//	 void increasecost()
//	 {
//		 cost = cost + (cost * 0.05);
//	 }
//	 double profit()
//	 {
//		 double p;
//		 p = price - cost;
//		 return p;
//	 }
//};
//int main()
//{
//	
//	const int numItems = 5;
//	item items[numItems] = {
//		item("Item1", 10.0, 15.0),
//		item("Item2", 8.0, 12.0),
//		item("Item3", 20.0, 30.0),
//		item("Item4", 15.0, 25.0),
//		item("Item5", 5.0, 10.0)
//	};
//
//	// Calculate total weight
//	double totalWeight = 0;
//	for (int i = 0; i < numItems; ++i) {
//		totalWeight += items[i].getweight();
//	}
//	cout << "Total Weight of Items: " << totalWeight << endl;
//
//	// Find and output the item with the highest price
//	item highestPriceItem = items[0];
//	for (int i = 1; i < numItems; ++i) {
//		if (items[i].getprice() > highestPriceItem.getprice()) {
//			highestPriceItem = items[i];
//		}
//	}
//	std::cout << "Item with Highest Price: " << highestPriceItem.getname() << std::endl;
//
//	// Count how many items are profitable
//	int profitableCount = 0;
//	for (int i = 0; i < numItems; ++i) {
//		if (items[i].profit() > 0) {
//			profitableCount++;
//		}
//	}
//	cout << "Number of Profitable Items: " << profitableCount << endl;
//	return 0;
//}
//
//
//	