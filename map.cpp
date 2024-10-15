#include <bits/stdc++.h>
using namespace std;
int main()
{
   map<string, int> mp;
   mp["Sakib al hasn"] = 79;  // O(logN)
   mp.insert({"akib", 100});  // আমরা দুইভাবে ম্যাপ এ ভেলু ইনসার্ট করতে পারি। 
   mp.insert({"akib", 150});  // ইনসার্ট ফাংশনের মধ্যে পেয়ার হিসেবে।
   mp["tamim"] = 79;        // সরাসরি ম্যাপ এর ইন্ডেক্স এ যেয়ে ভেলু সেট করে দিয়ে।
 
   for (auto it = mp.begin(); it != mp.end(); it++)
   {
      cout << it->first << " " << it->second << endl; // এভাবে আমরা পুরো ম্যাপ প্রিন্ট করে দিতে পারি। যার একটি ভেলু প্রিন্ট হওয়ার কমপ্লেক্সিটি O(logN) 
   }
  
   cout << mp.count("akib") << endl;   // কোন একটা ভেলু ম্যাপ এ আছে কিনা তা জানার জন্য কাউন্ট ফাংশন ব্যবহার করা হয়।
   return 0;
}
