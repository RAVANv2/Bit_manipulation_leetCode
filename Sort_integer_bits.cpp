class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
		vector<pair<int,int>> bits;

		for(auto i:bits)
		{
			unsigned int one=__builtin_popcount(i);
			bits.push_back(make_pair(one,i));
		}

		sort(bits.begin(),bits.end(), [](auto &p1, auto &p2){
			return p1.first<p2.first || (p1.first==p2.first && p1.second<p2.second)
		});

		vector<int> ans;
		for(auto i:bits)
		ans.push_back(i.second);
	return ans;
    }
};