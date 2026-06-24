class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int, int> freq;

       // 1) build frequency map
       for(int x : nums)
       {
           freq[x]++;
       }

       // 2) build buckets: frequency -> numbers 
       unordered_map<int , vector<int>> buckets;
       for(auto &p : freq)
       {
           buckets[p.second].push_back(p.first);
       }

       // 3) collect all frequencies and sort them
       vector<int> freqs;
       for(auto & p : buckets)
       {
          freqs.push_back(p.first);
       }
       sort(freqs.begin() , freqs.end());

       // 4) build result
       vector<int> res;

       for(int f : freqs)
       {
           auto &numsAtFreq = buckets[f];

           // sort numbers descending for tie rule
           sort(numsAtFreq.begin() , numsAtFreq.end() , greater<int>());

           for(int num : numsAtFreq){
               for(int i = 0 ; i < f; i++)
               {
                   res.push_back(num);
               }
            }
       }

       return res;}
};
