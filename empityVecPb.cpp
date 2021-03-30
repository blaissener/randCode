#include <iostream>
#include <vector>
#include <string>


int main(){
	
	std::vector<double> vec;

	for(int i = 0; i < 100; i++){
		vec.push_back(i);
	}
	
	std::cout << "worked\n";

	for(int i = 0; i<vec.size(); i++){
		std::cout << "vector " << std::to_string(i) << " :" << std::to_string(vec[i]) << std::endl;
	}

	return 0;
}
