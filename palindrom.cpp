class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		   string s="";
			// Store the digits of number in string
			while(n)
			{
				s = s + char((n%10) + '0');
				n /= 10;
			}
			string t = s;
			// reverse the string
			reverse(t.begin(), t.end());
			// Check if equal then palindrome otherwise not.
			if(s == t)
				return "Yes";
			return "No";
		}
		
};
