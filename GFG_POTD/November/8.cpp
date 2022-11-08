// https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        int x = 0;
        for (int i = 0; i < N; i++)
        {
            x = x ^ Arr[i];
        }
        
        int set = x & ~(x - 1);
        int f = 0, s = 0;
        
        for (int i = 0; i < N; i++)
        {
            if (set & Arr[i])
                f = f ^ Arr[i];
            else
                s = s ^ Arr[i];
        }
        if(f>=s)
            return {f,s};
        else
            return {s,f};
                
    }
};
