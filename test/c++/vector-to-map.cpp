#include <iostream>
#include <map>
#include <vector>

int main()
{
   std::vector<std::pair<std::string, int>> values = {
       {"one", 1},
       {"two", 2},
       {"three", 3}
   };

   std::map<std::string, int> map;
   std::copy(values.begin(), values.end(), std::inserter(map, map.begin()));

   for (const auto &entry: map) {
       std::cout << "{" << entry.first << ", " << entry.second << "}" << std::endl;
   }

   return 0;
}
