#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

int get_random_roll();
int sum_3_dice();

int main(){
	std::srand(time(0));

	while(true){
		int sum {};
		int stats[6];
		
		for(int i = 0; i < 6; i++){
			stats[i] = sum_3_dice();
			sum = sum + stats[i];
		}

		if(sum < 75){
			continue;
		}

		std::vector<int> sorted_stats(std::begin(stats), std::end(stats));
		std::sort(sorted_stats.begin(), sorted_stats.end());
		if(sorted_stats[4] < 15){
			continue;
		}
		
		std::cout << "Your RPG stats are:\n";
		std::cout << "Strength: " << stats[0] << '\n';
		std::cout << "Dexterity: " << stats[1] << '\n';
		std::cout << "Consitution: " << stats[2] << '\n';
		std::cout << "Intelligence: " << stats[3] << '\n';
		std::cout << "Wisdom: " << stats[4] << '\n';
		std::cout << "Charisma: " << stats[5] << '\n';

		break;	
	}
	return 0;
}

int get_random_roll(){
	return (std::rand() % 6) + 1;
}

int sum_3_dice(){
	int dice [4] = { get_random_roll(), get_random_roll(), get_random_roll(), get_random_roll() };
	std::sort(dice, dice + 4);
	return dice[1] + dice[2] + dice[3];
}
