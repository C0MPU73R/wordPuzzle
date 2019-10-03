#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> findWords(vector<vector<char>> wordPuzzle);
int main()
{
	vector<vector<char>> wordPuzzle = { {'f','i','n','d'},
										{'t','h', 'i', 's'},
										{'w','o','r','d'} };

	string words[] = { "this", "cool", "year" };

	findWords(wordPuzzle);

	system("pause");
	return 0;
}
vector<vector<char>> findWords(vector<vector<char>> wordPuzzle)
{
	vector<vector<char>> rows;
	rows.resize(wordPuzzle.size());
	//check rows
	for (int index = 0; index < wordPuzzle.size(); index++)
	{
		for (int index2 = 0; index2 < wordPuzzle[index].size(); index2++)
		{
			rows[index].push_back(wordPuzzle[index][index2]);
		}
	}

	vector<vector<char>> cols;
	cols.resize(4);
	for (int index = 0; index < wordPuzzle.size(); index++)
	{
		for (int index2 = 0; index2 < wordPuzzle[index].size(); index2++)
		{
			cols[index].resize(index2);
		}
	}





	//check cols
	for (int index = wordPuzzle.size() - 1; index >= 0; index--)
	{
		for (int index2 = wordPuzzle[index].size() - 1; index2 >= 0; index2--)
		{
			cols[index].push_back(wordPuzzle[index2][index]);
		}
	}



	return rows;

}