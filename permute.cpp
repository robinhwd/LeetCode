//---------------全排列(回溯法)------------------
class Solution 
{
public:
	void backTrack(int size, vector<int>& nums, vector<vector<int>>& output, int first)
	{
		if (first == size)
			output.push_back(nums);

		for (int i = first; i < size; i++)
		{
			swap(nums[first], nums[i]);
			backTrack(size, nums, output, first + 1);
			swap(nums[first], nums[i]);
		}
	}
	vector<vector<int>> permute(vector<int>& nums) 
	{
		vector<vector<int>> out;
		backTrack(nums.size(), nums, out, 0);

		//for (int i = 0; i < out.size(); i++)
		//{
		//	for (int j = 0; j < out[i].size(); j++)
		//		cout << out[i][j] << ' ';
		//	cout << endl;
		//}
		//cout << endl;

		return out;
	}
};

void main()
{
	Solution s;
	vector<int> nums = { 1,2,3,4 };
	s.permute(nums);
}
