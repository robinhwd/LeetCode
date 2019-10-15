//-----------------回文-----------------
class Solution {
public:
	bool isPalindrome(int x) 
	{
		if (x < 0) return false;
		if (x < 10 && x >= 0) return true;
		if (x >= 10 && x < 100)
		{
			if ((x % 10) != (x / 10))
				return false;
		}

		int temp = x;
		int i = 0;
		int vertInt = 0;
		vector<int> arrayInt;

		for (; temp >= 10; i++)
		{
			arrayInt.push_back(temp % 10);
			temp /= 10;
		}
		arrayInt.push_back(temp);

		for (int j = 0, size = arrayInt.size()-1; j < arrayInt.size(); j++, size--)
		{
			vertInt += arrayInt[j]*pow(10, size);
		}
		cout << vertInt << endl;
		return (vertInt == x) ? true : false;
	}
};
void main()
{
	Solution s;
	cout << s.isPalindrome(110011) << endl;
}
